import { Mesa } from "./Mesa";
import { Restaurante } from "./Restaurante";

describe('teste restaurante', ()=>{
    //criar a mesa com a quantidade de lugares que quisermos, e adicionar ela no restaurante.
    it('deve criar a mesa',()=>{
        const mesaDoisLugares = new Mesa(2);
        const mesaOitoLugares = new Mesa(8);
        const restaurante = new Restaurante();
        restaurante.adicionarMesa(mesaDoisLugares);
        restaurante.adicionarMesa(mesaOitoLugares);

       expect(restaurante.getMesas().length).toEqual(2)
    })

    it('verificar a quantidade maxima do restaurante', ()=>{
        const mesaDoisLugares = new Mesa(2);
        const mesaOitoLugares = new Mesa(8);
        const restaurante = new Restaurante();
        restaurante.adicionarMesa(mesaDoisLugares);
        restaurante.adicionarMesa(mesaOitoLugares);
        restaurante.verificaCapacidadeMaxima();
        expect(restaurante.verificaCapacidadeMaxima()).toEqual(10);

    })
})