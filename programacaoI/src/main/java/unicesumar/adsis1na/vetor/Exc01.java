package unicesumar.adsis1na.vetor;

import javax.swing.*;

//Crie um programa que leia um vetor de inteiros e imprima na tela o maior valor e sua posicao no vetor.
public class Exc01 {
    public static void main(String[] args) {
        int[] numeros = new int[10];
        int maior = numeros[0];
        int posicao = 0;


        for (int i = 0; i < 10; i++) {
            numeros[i] = Integer.parseInt(JOptionPane.showInputDialog("Digite o valor da posicao " + i + " do vetor: "));
        }
        for (int i = 0; i < numeros.length; i++) {
            if (numeros[i] > maior) {
                maior = numeros[i];
                posicao = i;
            }
        }

        JOptionPane.showMessageDialog(null, "O maior elemento esta na posicao " + posicao + " e o valor é: " + maior);
    }


}
