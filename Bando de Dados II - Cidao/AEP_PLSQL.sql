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
CREATE TABLE
    DEPARTAMENTOS (
        CODIGO NUMBER (3),
        DESCRICAO VARCHAR2 (30),
        CONSTRAINT PK_CODIGO PRIMARY KEY (CODIGO)
    );

CREATE TABLE
    EMPREGADOS (
        CODIGO NUMBER (5),
        NOME VARCHAR2 (50),
        DATA_ADMISSAO DATE,
        DATA_RESCISAO DATE,
        SALARIO NUMBER (9, 2),
        PROFISSAO VARCHAR2 (40),
        DEPTO NUMBER (3),
        CONSTRAINT PK_CODIGO PRIMARY KEY (CODIGO)
    );

ALTER TABLE EMPREGADOS ADD CONSTRAINT FK_DEPTO FOREIGN KEY (DEPTO) REFERENCES DEPARTAMENTOS (CODIGO);

INSERT INTO
    empregados
values
    (999, 'Ze', 'Silva', '01/01/06', '', '', 1);