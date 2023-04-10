import { ICalculo } from "./Calculo";
import { Operacao } from "./operacoes.ts/Operacao";

export class Calculator {

    public operacaoCalculadora(calculos: ICalculo[]) {
        calculos.sort((a, b) => {
            return a.operacao > b.operacao ? 1 : (a.operacao < b.operacao ? -1 : 0);
        })

        console.log(calculos);

        let calculoMultiplicacao = this.filterOperation(calculos,Operacao.MULTIPLICAR);

        // for (let i = 0; i < calculos.length; i++) {
        //     if (calculos[i].operacao === Operacao.MULTIPLICAR) {
        //         calculoMultiplicacao.push(calculos[i]);
        //     }
        // }

        // calculos.filter(c => c.operacao = Operacao.MULTIPLICAR);
    }

    private filterOperation(calculos: ICalculo[], operacao: Operacao):ICalculo[]{
        return calculos.filter(c=> c.operacao === operacao);
    }


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
