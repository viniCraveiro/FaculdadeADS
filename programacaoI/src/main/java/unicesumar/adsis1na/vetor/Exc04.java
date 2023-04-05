package unicesumar.adsis1na.vetor;

import javax.swing.*;
import java.util.Random;

//Crie um programa que leia dois vetores de 5 posições de  inteiros e verifique se eles são iguais,
// ou seja, se possuem os mesmos valores nas mesmas posições.
public class Exc04 {
    public static void main(String[] args) {
        int[] vetor1 = new int[5];
        int[] vetor2 = new int[5];
        boolean igual = true;
        Random valor = new Random();
        for (int i = 0; i < 5; i++) {
            vetor1[i] = valor.nextInt(0,10000);
            vetor2[i] = valor.nextInt(0,10000);
            if(vetor1[i] != vetor2[i]){
                JOptionPane.showMessageDialog(null, "Possui o valor diferente no vetor!");
            }else if (vetor1[i] == vetor2[i]){
                JOptionPane.showMessageDialog(null, "Possui o valor igual no vetor!");
                i=50;
            }

        }

    }
}
