package unicesumar.adsis1na;

import javax.swing.*;
import java.sql.Connection;
import java.sql.PreparedStatement;

public class LoginDAO {
    public void inserirCadastro(Login l) {
        try {
            Conexao conexao = new Conexao();
            Connection con = conexao.createConnectionMySQL();

            String sql = "insert into cadastro (nome, login, senha) "
                    + "values (?, ?, ?)";

            PreparedStatement stmt = con.prepareStatement(sql);
            stmt.setString(1, l.nome);
            stmt.setString(2, l.login);
            stmt.setString(3, l.senha);

            stmt.execute();

            con.close();
            stmt.close();
            JOptionPane.showMessageDialog(null, "Login cadastrado com sucesso!");
        } catch (Exception e) {
            JOptionPane.showMessageDialog(null, "Erro no cadastro de login.\n" + e);
        }
    }
}
