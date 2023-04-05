import { ICalculo } from "./Calculo";

export class Calculator {

    public sum(a: number, b: number): number {
        return a + b;
    }

    public sub(a: number, b: number): number {
        return a - b;
    }

    public mult(a: number, b: number): number {
        return a * b;
    }

    public div(a: number, b: number): number {

        if (a === 0 || b === 0) {
            console.error('Nao pode ser divisivel por 0');
            return 0;
        }
        return a / b;
    }

    public somarMuitos(numeros: number[]): number {
        return numeros.reduce((acumulator, n) => acumulator + n, 0);
    }

    public verificaOperacao(operacao: ICalculo[]) {

    }

};
