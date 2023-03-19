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
    DATA_ADMISSAO DATE,
    DATA_RESCISAO DATE,
    SALARIO NUMBER (9, 2),
    PROFISSAO VARCHAR2 (40),
    DEPTO NUMBER (3)
);

ALTER TABLE EMPREGADOS ADD CONSTRAINT FK_DEPTO FOREIGN KEY (DEPTO) REFERENCES DEPARTAMENTOS (CODIGO);

-------------------------------------------------------------------------------------------------------------
--INSERT DE EMPREGADOS
INSERT INTO EMPREGADOS VALUES (
    999,
    'Ze',
    'Silva',
    '01/01/06',
    '',
    '',
    1
);

INSERT INTO EMPREGADOS VALUES (
    1,
    'VINICIUS',
    TO_DATE ('19/03/2022', 'DD/MM/YYYY'),
    NULL,
    100.00,
    'DESENVOLVER',
    1
);

--INSERT DE DEPARTAMENTOS
INSERT INTO DEPARTAMENTOS VALUES (
    001,
    'TI'
);

INSERT INTO DEPARTAMENTOS VALUES (
    001,
    'TI'
);

DECLARE
    vPORCENTAGEM NUMBER;
    vSALARIO EMPREGADOS.SALARIO%TYPE;
    vCODIGO EMPREGADOS.CODIGO%TYPE;
BEGIN
    SELECT
        COUNT(CODIGO) INTO VNUMFUNCIONARIO
    FROM
        EMPREGADOS
    WHERE
        DATA_RESCISAO IS NULL;
    SELECT
        SUM(SALARIO) INTO VSALARIO
    FROM
        EMPREGADOS;
    SELECT
        SUM( CASE
            WHEN SALARIO <= 1903.98 THEN
                SALARIO * 0
            WHEN SALARIO <= 2826.65 THEN
                SALARIO * 0.075
            WHEN SALARIO <= 3751.05 THEN
                SALARIO * 0.15
            ELSE
                SALARIO * 0.225
        END ) INTO VSALDESCONTOS
    FROM
        EMPREGADOS;
    DBMS_OUTPUT.PUT_LINE ( 'Total de funcionarios: '
        || VNUMFUNCIONARIO
        || ' - '
        || 'Salario Total R$: '
        || VSALARIO
        || ' - '
        || 'Total Descontado R$: '
        || VSALDESCONTOS );
END;