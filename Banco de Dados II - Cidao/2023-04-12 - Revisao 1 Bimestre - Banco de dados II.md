## Declaracao de variavel
	%type - define a variavel com o mesmo tipo da coluna da tabela
	%rowtype - define a mesma estrutura da tabela

# Logica
	IF (condição) THEN
	    ELSEIF (condição) THEN
	    ELSE
	END IF;


# Laço de repetição
-"Precisa de condição de parada"
	LOOP
	  IF(condição) THEN
	    EXIT;
	  END IF;
	  ou
	  EXIT WHEN condição 
	END LOOP
     ----------------------------
	WHILE (condição) LOOP
	  Atualizar condição;
	END LOOP;

	"Não precisa de condição de para explicita"
	FOR variavel IN valor LOOP
	END LOOP;

## Cursor
	Sempre ligado a um SELECT
	Declarado como uma variavel
EX:
Declare
  Cursor C_Livro IS SELECT * FROM Livro;
  r_Livro C_Livo%ROWTYPE;  	--Sempre precisa criar uma variavel do mesmo tipo do cursor quando for manual
BEGIN
  OPEN C_Livro; 		--Abre cursor e carrega em memoria
  FETCH C_Livro INTO r_Livro;   --Posiciona na linha (1a) do cursor
  CLOSE C_Livro; 		--Fecha cursor

- USANDO LOOP
  LOOP
    FETCH C_Livro INTO r_Livro;
    IF C_Livro%NOTFOUND THEN	--Tem que testar a condição de parada
      EXIT;
    END IF;
  END LOOP;

- USANDO WHILE
  FETCH C_Livro INTO r_Livro; 	--Posiciona para testar a condição
  WHILE C_Livro%FOUND LOOP
    FETCH C_Livro INTO r_Livro;	--Atualizar a condição de parada
  END LOOP;

- USANDO FOR CURSOR:
    --ELE JA INICIALIZA, JA CRIA A VARIAVEL AUTOMATICAMENTE
    FOR R_LIVRO IN C_LIVRO LOOP
        --FAZ O FETCH DE FORMA AUTOMATICA
    END LOOP;
    -- AO SAIR DO LAÇO ELE FAZ O CLOSE;
END;

## TRIGGER
- GATILHOS SAO EXECUTADOS POR AÇÕES (INSERT, UPDATE, DELETE)
- POSSUEM EVENTO DE TEMPO -> BEFORE ou AFTER;
- POSSUEM VARIAVEIS DO EVENTO -> :NEW ou :OLD;
BEFORE
    CONSULTA E ALTERA O VALOR DO NEW;
    CONSULTA O VALOR DO OLD;
AFTER
    SOMENTE CONSULTA O VALOR DO NEW;
    CONSULTA O VALOR DO OLD;

INSERT -> SOMENTE NEW
UPDATE -> PUSSUI :NEW E :OLD;
DELETE -> SOMENTE :OLD;

FOR EACH ROW -> NESTES CASOS CONSEGUE UTILIZAR O :NEW E :OLD;

- EXEMPLO DE NEW (ALTERANDO VALOR)
- BEFORE
CREATE OR REPLACE TRIGGER TG_TESTE
BEFORE INSERT
ON TESTE --TABELA
FOR EACH ROW -- PARA PODER UTILIZAR O NEW
BEGIN
    IF :NEW.VALOR IS NULL THEN
        :NEW.VALOR := 0;
    END IF;
END;

- AFTER
CREATE OR REPLACE TRIGGER TG_TESTE
AFTER UPDATE
ON TESTE
FOR EACH ROW
BEGIN
    INSERT INTO TABELALOG(VALOR_NOVO, VALOR_ANTIGO)
    VALUES (:NEW.VALOR, :OLD.VALOR);
END;