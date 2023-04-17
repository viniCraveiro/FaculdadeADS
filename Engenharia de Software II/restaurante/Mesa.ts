export class Mesa {
    private _quantidadeLugares: number = 0;
    constructor(quantLugares: number) {
        this._quantidadeLugares = quantLugares;
    }

    public getQuantidadeLugares(): number{
        return this._quantidadeLugares;
    }
}