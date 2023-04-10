import { Identifier } from "./Identifier";


describe("testa a classe Identifier", () => {

    it("deve ser alfanumerico", () => {

        const identifier = new Identifier();

        const resultado = identifier.isValid("P7tu52");


        // expect(resultado).toBeTruthy();

    });


    it("nao deve iniciar com numero", () => {

        const identifier = new Identifier();

        const resultado = identifier.isValid("7tu52");


        // expect(resultado).toBeFalsy();

    });


    it("nao deve iniciar com letra minuscula", () => {

        const identifier = new Identifier();

        const resultado = identifier.isValid("ptu52");


        // expect(resultado).toBeFalsy();

    });


    it("deve conter no maximo 10 caracteres", () => {

        const identifier = new Identifier();

        const resultado = identifier.isValid("P7tu52yJ19");


        // expect(resultado).toBeTruthy();

    });


    it("nao deve conter mais do que 10 caracters", () => {

        const identifier = new Identifier();

        const resultado = identifier.isValid("P7tu52yJ19k");


        // expect(resultado).toBeFalsy();

    });

});