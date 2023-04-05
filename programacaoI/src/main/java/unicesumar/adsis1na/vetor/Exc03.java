package unicesumar.adsis1na.vetor;

import javax.swing.*;
import java.util.Random;

//Escreva um programa que leia um vetor de 10 inteiros e imprima na tela todos os valores ímpares.
public class Exc03 {
    public static void main(String[] args) {
        int[] value = new int[10];
        Random numero = new Random();
        String resp = "";

        for (int i = 0; i < 10; i++) {
            value[i] = numero.nextInt(0,100);
            if(value[i]%2 != 0){
                resp += "Os valores impares sao: " + value[i]+"\n";

            }
        }

        JOptionPane.showMessageDialog(null, resp);
    }
}
