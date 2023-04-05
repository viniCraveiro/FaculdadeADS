package unicesumar.adsis1na.vetor;

import javax.swing.*;

public class VetorExe {
    public static void main(String[] args) {
        int quantidade;
        double soma = 0;
        double media = 0;
        quantidade = Integer.parseInt(JOptionPane.showInputDialog("Digite a quantidade"));
        double notas[] = new double[quantidade];


        for (int i = 0; i < quantidade; i++) {
            notas[i] = Double.parseDouble(JOptionPane.showInputDialog("Digite a nota" + (i + 1) + ":"));
            soma += notas[i];
        }

        media = soma / quantidade;

        JOptionPane.showMessageDialog(null, "A média das " + quantidade
                + " notas, foi de: " + media);


    }
}
