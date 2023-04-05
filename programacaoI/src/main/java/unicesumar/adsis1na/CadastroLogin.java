package unicesumar.adsis1na;

import javax.swing.*;

public class CadastroLogin {
    public static void main(String[] args) {
        String nome, login, senha;
        Login l1 = new Login();
        LoginDAO daoLogin = new LoginDAO();

        int opcao;
        do {
            nome = JOptionPane.showInputDialog("Digite nome: ");
            login = JOptionPane.showInputDialog("Digite login: ");
            senha = JOptionPane.showInputDialog("Digite senha: ");
            l1.nome = nome;
            l1.login = login;
            l1.senha = senha;
            daoLogin.inserirCadastro(l1);

            opcao = Integer.parseInt(JOptionPane.showInputDialog("Digite -1 para encerrar: "));
        } while (opcao != -1);
    }
}
