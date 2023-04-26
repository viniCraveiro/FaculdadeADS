import { IBook } from "./Book.model";

export interface IEditor {
    name: string;
    books: Array<IBook>;
}