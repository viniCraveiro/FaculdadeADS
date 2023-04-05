package unicesumar.adsis1na.vetor;

import javax.swing.*;

//Escreva um programa que crie dois vetores de inteiros,
// some os valores dos mesmos índices de cada vetor e armazene o
// resultado em um terceiro vetor. Imprima o terceiro vetor.
public class Exc02 {
    public static void main(String[] args) {
        int TAMVETOR = 5;
        int vetor1[] = new int[TAMVETOR];
        int vetor2[] = new int[TAMVETOR];
        int soma[] = new int[TAMVETOR];
        String resultado= "";

        for (int i = 0; i < TAMVETOR; i++) {
            vetor1[i] = Integer.parseInt(JOptionPane.showInputDialog("Digite o valor da posicao " + i + " do vetor1: "));
            vetor2[i] = Integer.parseInt(JOptionPane.showInputDialog("Digite o valor da posicao " + i + " do vetor2: "));
        }

        for (int i = 0; i < TAMVETOR; i++) {
            soma[i] = vetor1[i]+vetor2[i];
            resultado += "SOMA["+i+"] = "+soma[i]+"\n";
        }

        JOptionPane.showMessageDialog(null, resultado);

    }
}
