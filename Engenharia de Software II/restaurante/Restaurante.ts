import { Mesa } from "./Mesa";

export class Restaurante {
    private _mesas: Array<Mesa> = [];
    capacidadeMax: number = 0;


    public adicionarMesa(mesa: Mesa) {
        this._mesas.push(mesa);
    }

    public getMesas(): Array<Mesa> {
        return this._mesas;
    }

    public verificaCapacidadeMaxima(): number{
        let capMaxima = 0;
        this.getMesas().forEach(mesa => {
            capMaxima += mesa.getQuantidadeLugares();
        })
        return capMaxima;
    }
}