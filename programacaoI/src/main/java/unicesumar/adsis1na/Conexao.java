package unicesumar.adsis1na;

import java.sql.*;


public class Conexao {
    public static void main(String[] args) throws ClassNotFoundException, SQLException{

        Class.forName("com.mysql.cj.jdbc.Driver");
        Connection conexao = DriverManager.getConnection("jdbc:mysql://localhost:3306","root","maquinasagricolas");
        System.out.println("Tentando conexao");
        conexao.close();
    }
}

