-- ========================== EXERCICIO 01 ==========================================
-- Crie as seguintes tabelas abaixo para a realização da AEP:
--     Empregados:
-- Código Number(5)
-- Nome Varchar(50)
-- Sobrenome Varchar(50)
-- Data_Admissao Date
-- Data_Rescisao Date
-- Salário Number(9,2)
-- Profissao Varchar(40)
-- Depto Number(3).
-- Tabela: Departamentos
--     Código Number(3)
--     Descrição Varchar(30) .
--CRIACAO DA TABELA
CREATE TABLE DEPARTAMENTOS (
    CODIGO NUMBER (3) PRIMARY KEY NOT NULL,
    DESCRICAO VARCHAR2 (30)
);
CREATE TABLE EMPREGADOS (
    CODIGO NUMBER (5) PRIMARY KEY NOT NULL,
    NOME VARCHAR2 (50),
    SOBRENOME VARCHAR2 (50),
    DATA_ADMISSAO DATE,
    DATA_RESCISAO DATE,
    SALARIO NUMBER (9, 2),
    PROFISSAO VARCHAR2 (40),
    DEPTO NUMBER (3)
);
ALTER TABLE EMPREGADOS
ADD CONSTRAINT FK_DEPTO FOREIGN KEY (DEPTO) REFERENCES DEPARTAMENTOS (CODIGO);
-------------------------------------------------------------------------------------------------------------
-- ========================== EXERCICIO 02 ==========================================
--  Um funcionário foi cadastrado desta forma: INSERT INTO empregados values(999,’Ze’,’Silva’,’01/01/06’,’’,’’,1) 
--  Monte o tratamento de erros que podem ser gerados a partir deste insert.  
INSERT INTO EMPREGADOS
VALUES (
        999,
        'Ze',
        'Silva',
        '01/01/06',
        '',
        '',
        1
    );
--INSERT DE DEPARTAMENTOS
INSERT INTO DEPARTAMENTOS(CODIGO, DESCRICAO)
VALUES (1, 'TI');
INSERT INTO DEPARTAMENTOS(CODIGO, DESCRICAO)
VALUES (2, 'FINANCEIRO');
INSERT INTO DEPARTAMENTOS(CODIGO, DESCRICAO)
VALUES (3, 'SUPORTE');
INSERT INTO DEPARTAMENTOS(CODIGO, DESCRICAO)
VALUES (4, 'COMERCIAL');
INSERT INTO EMPREGADOS
VALUES (
        1,
        'VINICIUS',
        'CRAVEIRO',
        TO_DATE ('10/03/2022', 'DD/MM/YYYY'),
        NULL,
        5537.00,
        'DEVELOPER',
        1
    );
INSERT INTO EMPREGADOS
VALUES (
        2,
        'BEATRIZ',
        'SILVA',
        TO_DATE ('15/02/2022', 'DD/MM/YYYY'),
        NULL,
        1500.00,
        'CONTAS A PAGAR',
        2
    );
INSERT INTO EMPREGADOS
VALUES (
        3,
        'CAIO',
        'HENRIQUE',
        TO_DATE ('01/01/2022', 'DD/MM/YYYY'),
        NULL,
        2500.00,
        'ANALISTA',
        3
    );
INSERT INTO EMPREGADOS
VALUES (
        4,
        'JOSIAS',
        'AUGUSTO',
        TO_DATE ('24/12/2022', 'DD/MM/YYYY'),
        NULL,
        NULL,
        'VENDEDOR',
        4
    );
DECLARE BEGIN
INSERT INTO EMPREGADOS
values (999, 'Ze', 'Silva', '01/01/06', '', '', 1);
EXCEPTION
WHEN DUP_VAL_ON_INDEX THEN DBMS_OUTPUT.PUT_LINE('Chave primaria duplicada.');
WHEN OTHERS THEN DBMS_OUTPUT.PUT_LINE(
    'Tipo de dado informado esta de forma incorreta.'
);
END;
-- ========================== EXERCICIO 03 ==========================================
--   Crie um bloco de PL/SQL que mostre o total de funcionários empregados, 
--   total bruto da folha de pagamento e total de descontos da folha de pagamento (descontos referentes a IR). 
--   Devem ser tratada as devidas exceptions.
DECLARE VNUMFUNCIONARIO NUMBER;
VSALARIO EMPREGADOS.SALARIO %TYPE;
VSALDESCONTOS EMPREGADOS.SALARIO %TYPE;
BEGIN
SELECT COUNT(CODIGO) INTO VNUMFUNCIONARIO
FROM EMPREGADOS
WHERE DATA_RESCISAO IS NULL;
SELECT SUM(SALARIO) INTO VSALARIO
FROM EMPREGADOS;
SELECT SUM(
        CASE
            WHEN SALARIO <= 1903.98 THEN SALARIO * 0
            WHEN SALARIO <= 2826.65 THEN SALARIO * 0.075
            WHEN SALARIO <= 3751.05 THEN SALARIO * 0.15
            ELSE SALARIO * 0.225
        END
    ) INTO VSALDESCONTOS
FROM EMPREGADOS;
DBMS_OUTPUT.PUT_LINE (
    'Total de funcionarios: ' || VNUMFUNCIONARIO || ' - ' || 'Salario Total R$: ' || VSALARIO || ' - ' || 'Total Descontado R$: ' || VSALDESCONTOS
);
END;
--   ========================== EXERCICIO 04 ==========================================
--   Crie um bloco de PL/SQL  que receba uma porcentagem e um código de funcionário e 
--   recalcule o salário de todos os funcionários que estão empregados, mostrando na tela o seu nome, salário atual e salário projetado. 
--   Realize o update e caso o funcionário não exista, envie a mensagem para o usuário.
DECLARE vPORCENTAGEM NUMBER(10, 2) := 1.50;
CURSOR C_EMPREGADOS IS
SELECT 
    NOME,
    SOBRENOME,
    CODIGO,
    SALARIO
FROM EMPREGADOS
WHERE DATA_RESCISAO IS NULL;
R_EMPREGADOS C_EMPREGADOS %ROWTYPE;
BEGIN 
    OPEN C_EMPREGADOS;
        LOOP FETCH C_EMPREGADOS INTO R_EMPREGADOS;
            IF C_EMPREGADOS %FOUND AND R_EMPREGADOS.SALARIO IS NOT NULL THEN 
                DBMS_OUTPUT.PUT_LINE(
                'CODIGO: ' || R_EMPREGADOS.CODIGO 
                || ' - NOME: ' || R_EMPREGADOS.NOME || ' ' || R_EMPREGADOS.SOBRENOME 
                || ' - SALARIO ATUAL: ' || R_EMPREGADOS.SALARIO 
                || ' - SALARIO PROJETADO: ' || R_EMPREGADOS.SALARIO * vPORCENTAGEM
                 );
                UPDATE EMPREGADOS
                SET SALARIO = SALARIO * vPORCENTAGEM
                WHERE CODIGO = R_EMPREGADOS.CODIGO;
            ELSE EXIT;
            END IF;
        END LOOP;
        EXCEPTION WHEN NO_DATA_FOUND THEN DBMS_OUTPUT.PUT_LINE('FUNCIONARIO INEXISTENTE');
    CLOSE C_EMPREGADOS;
END;
-------------------------------------------------------------------------------------------