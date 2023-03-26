-- CREATE TABLE CLIENTE(
-- codcliente int,
-- nome varchar(60),
-- datanascimento date,
-- cpf varchar(11),
-- CONSTRAINT pk_cliente PRIMARY KEY (codcliente)
-- );
-- CREATE TABLE PEDIDO(
-- codpedido int,
-- codcliente int,
-- datapedido date,
-- nf varchar(12),
-- valortotal decimal(10,2),
-- CONSTRAINT pk_pedido PRIMARY KEY (codpedido),
-- CONSTRAINT pk_pedido_cliente FOREIGN KEY (codcliente) REFERENCES CLIENTE(codcliente)
-- );

-- CREATE TABLE PRODUTO(
-- codproduto int,
-- descricao varchar2(100),
-- quantidade int,
-- CONSTRAINT pk_produto PRIMARY KEY (codproduto)
-- );
-- CREATE TABLE ITEMPEDIDO(
-- codpedido int,
-- numeroitem int,
-- valorunitario decimal(10,2),
-- quantidade int,
-- codproduto int,
-- CONSTRAINT pk_itempedido PRIMARY KEY (codpedido, numeroitem),
-- CONSTRAINT fk_codpedido FOREIGN KEY (codpedido) REFERENCES PEDIDO (codpedido),
-- CONSTRAINT fk_itempedido_produto FOREIGN KEY (codproduto) REFERENCES PRODUTO
-- (codproduto)
-- );

-- CREATE TABLE LOG(
-- codlog int,
-- data date,
-- descricao varchar2(255),
-- CONSTRAINT pk_log PRIMARY KEY (codlog)
-- );

-- CREATE TABLE REQUISICAO_COMPRA(
-- codrequisicaocompra int,
-- codproduto int,
-- data date,
-- quantidade int,
-- CONSTRAINT pk_reqcompra PRIMARY KEY (codrequisicaocompra),
-- CONSTRAINT fk_reqcompra_produto FOREIGN KEY (codproduto) REFERENCES PRODUTO(codproduto)
-- );

-- INSERT INTO CLIENTE VALUES (1, 'Sylvio Barbon', TO_DATE('05/12/1984', 'DD/MM/YYYY'),'12315541212');
-- INSERT INTO CLIENTE VALUES (2, 'Antonio Carlos da Silva', TO_DATE('01/11/1970', 'DD/MM/YYYY'),'12313345512');
-- INSERT INTO CLIENTE VALUES (3, 'Thiago Ribeiro', TO_DATE('15/11/1964', 'DD/MM/YYYY'),'12315544411');
-- INSERT INTO CLIENTE VALUES (4, 'Carlos Eduardo', TO_DATE('25/10/1924', 'DD/MM/YYYY'),'42515541212');
-- INSERT INTO CLIENTE VALUES (5, 'Maria Cristina Goes', TO_DATE('03/11/1981', 'DD/MM/YYYY'),'67715541212');
-- INSERT INTO CLIENTE VALUES (6, 'Ruan Manoel Fanjo', TO_DATE('06/12/1983', 'DD/MM/YYYY'),'32415541212');
-- INSERT INTO CLIENTE VALUES (7, 'Patr¡cia Marques', TO_DATE('01/02/1944', 'DD/MM/YYYY'),'77715541212');

-- INSERT INTO PRODUTO VALUES (1, 'Mouse', 10);
-- INSERT INTO PRODUTO VALUES (2, 'Teclado', 10);
-- INSERT INTO PRODUTO VALUES (3, 'Monitor LCD', 10);
-- INSERT INTO PRODUTO VALUES (4, 'HD SSD', 10);
-- INSERT INTO PRODUTO VALUES (5, 'Impressora', 10);

-- INSERT INTO PEDIDO VALUES (1, 1, TO_DATE('01/03/2023', 'DD/MM/YYYY'), '00001', 400.00);
-- INSERT INTO ITEMPEDIDO VALUES (1, 1, 10.90, 1, 1);
-- INSERT INTO ITEMPEDIDO VALUES (1, 2, 389.10, 1, 3);

-- INSERT INTO PEDIDO VALUES (2, 2, TO_DATE('02/03/2023', 'DD/MM/YYYY'), '00002', 10.90);
-- INSERT INTO ITEMPEDIDO VALUES (2, 1, 10.90, 1, 1);
-- INSERT INTO PEDIDO VALUES (3, 2, TO_DATE('06/03/2023', 'DD/MM/YYYY'), '00003', 21.80);
-- INSERT INTO ITEMPEDIDO VALUES (3, 1, 10.90, 1, 1);

-- INSERT INTO PEDIDO VALUES (4, 3, TO_DATE('01/02/2023', 'DD/MM/YYYY'), '00004', 169.10);
-- INSERT INTO ITEMPEDIDO VALUES (4, 1, 10.90, 1, 1);
-- INSERT INTO ITEMPEDIDO VALUES (4, 2, 15.90, 2, 2);
-- INSERT INTO ITEMPEDIDO VALUES (4, 3, 25.50, 1, 4);
-- INSERT INTO ITEMPEDIDO VALUES (4, 4, 100.90, 1, 5);

-- INSERT INTO PEDIDO VALUES (5, 4, TO_DATE('10/02/2023', 'DD/MM/YYYY'), '00005', 100.90);
-- INSERT INTO ITEMPEDIDO VALUES (5, 1, 100.90, 1, 5);

-- INSERT INTO PEDIDO VALUES (6, 6, TO_DATE('05/01/2023', 'DD/MM/YYYY'), '00006', 51.35);
-- INSERT INTO ITEMPEDIDO VALUES (6, 1, 25.50, 2, 4);

-- CREATE SEQUENCE LOG_SEQ
-- START WITH 1
-- INCREMENT BY 1
-- MAXVALUE 99999
-- MINVALUE 1
-- CACHE 20
-- ;


DECLARE
	CURSOR C_CLIENTE IS SELECT CODCLIENTE, NOME FROM CLIENTE;
	r_CLIENTE c_CLIENTE%ROWTYPE;
BEGIN
	OPEN C_CLIENTE;
	LOOP
		FETCH C_CLIENTE INTO r_CLIENTE;
		IF C_CLIENTE%FOUND THEN
			DBMS_OUTPUT.PUT_LINE(r_CLIENTE.CODCLIENTE || ' - ' || r_CLIENTE.NOME);
		ELSE EXIT;
		END IF;
	END LOOP;
	CLOSE C_CLIENTE;
END;

-- SELECT COUNT(CODCLIENTE) FROM CLIENTE;

-- DECLARE
-- 	CURSOR C_PEDIDO(PCLIENTE IN INT) IS
--     	SELECT * FROM PEDIDO
-- 		WHERE CODCLIENTE = PCLIENTE;
-- 	r_pedido c_pedido%rowtype;
-- 	r_cliente
-- BEGIN
-- 	OPEN C_PEDIDO(1);
-- 	FETCH C_PEDIDO INTO R_PEDIDO;
-- 	DBMS_OUTPUT.PUT_LINE(R_PEDIDO.CODPEDIDO || ' - '||R_PEDIDO.DATAPEDIDO || ' - ' || R_PEDIDO.VALORTOTAL);
-- 	CLOSE C_PEDIDO;
-- END;





DECLARE
	CURSOR C_PEDIDO(PCLIENTE IN INT) IS
    	SELECT
            *
        FROM PEDIDO
		WHERE CODCLIENTE = PCLIENTE;
    CURSOR C_CLIENTE IS
        SELECT
            CODCLIENTE,
            NOME
        FROM CLIENTE;

    R_PEDIDO    C_PEDIDO%ROWTYPE;
	R_CLIENTE   C_CLIENTE%ROWTYPE;
BEGIN
    OPEN C_CLIENTE;
    LOOP
        FETCH C_CLIENTE INTO R_CLIENTE;
        IF C_CLIENTE%FOUND THEN
            DBMS_OUTPUT.PUT_LINE('CLIENTE: '|| R_CLIENTE.CODCLIENTE || ' - ' || R_CLIENTE.NOME);

            OPEN C_PEDIDO(R_CLIENTE.CODCLIENTE);
            LOOP
                FETCH C_PEDIDO INTO R_PEDIDO;
                IF C_PEDIDO%FOUND THEN
	                DBMS_OUTPUT.PUT_LINE('PEDIDO: '|| R_PEDIDO.CODPEDIDO || ' - '||R_PEDIDO.DATAPEDIDO || ' - ' || R_PEDIDO.VALORTOTAL);
                ELSE EXIT;
                END IF;
            END LOOP;
    CLOSE C_PEDIDO;
        ELSE EXIT;
        END IF;
    END LOOP;
    CLOSE C_CLIENTE;
END;

---------------------------------------------

DECLARE
	CURSOR C_PEDIDO(PCLIENTE IN INT) IS
    	SELECT
            *
        FROM PEDIDO
		WHERE CODCLIENTE = PCLIENTE;
    CURSOR C_CLIENTE IS
        SELECT
            CODCLIENTE,
            NOME
        FROM CLIENTE;
    CURSOR C_ITEMPEDIDO(CPEDIDO IN INT) IS
        SELECT
        *
        FROM ITEMPEDIDO I INNER JOIN CODPEDIDO C ON I.CODPEDIDO = C.CODPEDIDO
        WHERE CODPEDIDO = CPEDIDO;

    R_PEDIDO    C_PEDIDO%ROWTYPE;
	R_CLIENTE   C_CLIENTE%ROWTYPE;
    R_ITEMPEDIDO C_ITEMPEDIDO%ROWTYPE;
BEGIN
    OPEN C_CLIENTE;
    LOOP
        FETCH C_CLIENTE INTO R_CLIENTE;
        IF C_CLIENTE%FOUND THEN
            DBMS_OUTPUT.PUT_LINE('CLIENTE: '|| R_CLIENTE.CODCLIENTE || ' - ' || R_CLIENTE.NOME);

            OPEN C_PEDIDO(R_CLIENTE.CODCLIENTE);
            LOOP
                FETCH C_PEDIDO INTO R_PEDIDO;
                IF C_PEDIDO%FOUND THEN
	                DBMS_OUTPUT.PUT_LINE('PEDIDO: '|| R_PEDIDO.CODPEDIDO || ' - '||R_PEDIDO.DATAPEDIDO || ' - ' || R_PEDIDO.VALORTOTAL);
                OPEN C_ITEMPEDIDO INTO R_ITEMPEDIDO;
                IF C_ITEMPEDIDO%FOUND THEN
                    DBMS_OUTPUT.PUT_LINE('-- codpedido int,
-- numeroitem int,
-- valorunitario decimal(10,2),
-- quantidade int,
-- codproduto int,
-- CONSTRAINT pk_itempedido PRIMARY KEY (codpedido, numeroitem),
-- CONSTRAINT fk_codpedido FOREIGN KEY (codpedido) REFERENCES PEDIDO (codpedido),
-- CONSTRAINT fk_itempedido_produto FOREIGN KEY (codproduto) REFERENCES PRODUTO
-- (codproduto)' || R_ITEMPEDIDO.NUMEROITEM || R_ITEMPEDIDO.VALORUNITARIO || R_ITEMPEDIDO.QUANTIDADE );
                ELSE EXIT;
                END IF;
            END LOOP;
    CLOSE C_PEDIDO;
        ELSE EXIT;
        END IF;
    END LOOP;
    CLOSE C_CLIENTE;
END;
