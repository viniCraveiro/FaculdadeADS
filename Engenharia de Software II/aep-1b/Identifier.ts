export class Identifier {

    public isValid(value: string): boolean {
        const regex = /^(?=[^0-9])(?=[^a-z])(\w{0,10})$/;
        if(regex.test(value)){
            return true
        }
        return false;
    }

}