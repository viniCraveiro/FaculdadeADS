import { IAuthor } from "./Author.model";

export interface IBook {
    name: string;
    author: IAuthor;
}