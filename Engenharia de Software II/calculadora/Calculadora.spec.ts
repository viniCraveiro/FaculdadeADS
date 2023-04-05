import { Calculator } from "./Calculadora";
import { ICalculo } from "./Calculo";
import { Operacao } from "./operacoes.ts/Operacao";

describe('test of calculator', () => {
    it('Test Sum', () => {
        const calculator = new Calculator();
        const result = calculator.sum(4, 2);
        expect(result).toEqual(6);
    });

    it('Test Divisao', () => {
        const calculator = new Calculator();
        const result = calculator.div(10, 2);
        expect(result).toEqual(5);
    });

    it('Test Multiplicacao', () => {
        const calculator = new Calculator();
        const result = calculator.mult(5, 3);
        expect(result).toEqual(15);
    });

    it('Test Subtracao', () => {
        const calculator = new Calculator();
        const result = calculator.sub(10, 2);
        expect(result).toEqual(8);
    });

    it('Test Somar muitos', () => {
        const calculator = new Calculator();
        const result = calculator.somarMuitos([10, 2, 4, 5]);
        expect(result).toEqual(21);
    });

    it('Deve testar todas as operacoes', () => {
        const calculos: ICalculo[] = [{
            numero: 2,
            operacao: Operacao.SOMAR
        }]

        const calculator = new Calculator();
        calculator.verificaOperacao(calculos)
    });



});

