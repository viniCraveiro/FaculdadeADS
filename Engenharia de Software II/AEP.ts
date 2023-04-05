// Os testes unitários são essenciais no desenvolvimento de aplicações, pois ajudam a garantir a qualidade e a confiabilidade do software.

// Pensando nisso criei uma classe de teste que verifica 3 especificações de um determinado valor e retorna se é verdadeiro ou falso:

// 1- Deve ser alfanumérico

// 2- Deve iniciar com uma letra maiúscula 

// 3- Deve conter no máximo 10 caracteres (sem espaços)


// Utilize o ambiente de desenvolvimento criado em aula para copiar a classe de teste e desenvolver a classe que será testada.


// A classe de teste já está pronta, você deverá apenas criar a classe Identifier e implementar as regras mencionadas, de modo que todos os testes da classe Identifier.spec.ts fiquem verdes (com sucesso). OBS: não altere a classe de teste


// Identifier.spec.ts (classe de teste)



// import { Identifier } from "./Identifier";


// describe("testa a classe Identifier", () => {

//   it("deve ser alfanumerico", () => {

//     const identifier = new Identifier();

//     const resultado = identifier.isValid("P7tu52");


//     expect(resultado).toBeTruthy();

//   });


//   it("nao deve iniciar com numero", () => {

//     const identifier = new Identifier();

//     const resultado = identifier.isValid("7tu52");


//     expect(resultado).toBeFalsy();

//   });


//   it("nao deve iniciar com letra minuscula", () => {

//     const identifier = new Identifier();

//     const resultado = identifier.isValid("ptu52");


//     expect(resultado).toBeFalsy();

//   });


//   it("deve conter no maximo 10 caracteres", () => {

//     const identifier = new Identifier();

//     const resultado = identifier.isValid("P7tu52yJ19");


//     expect(resultado).toBeTruthy();

//   });


//   it("nao deve conter mais do que 10 caracters", () => {

//     const identifier = new Identifier();

//     const resultado = identifier.isValid("P7tu52yJ19k");


//     expect(resultado).toBeFalsy();

//   });

// });




// classe Identifier


