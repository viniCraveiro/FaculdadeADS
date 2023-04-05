package unicesumar.adsis1na;

import java.sql.*;


public class Conexao {
    private static final String USER = "root";
    private static final String PASSWORD = "maquinasagricolas";
    private static final String URL = "jdbc:mysql://localhost:3306/aulaJava";

    public static Connection createConnectionMySQL() throws Exception{
        Connection  conexao = DriverManager.getConnection(URL, USER, PASSWORD);
        return conexao;
    }

    public static void main(String[] args) throws Exception {
        Connection conexao = createConnectionMySQL();
        Class.forName("com.mysql.cj.jdbc.Driver");
        System.out.println("Tentando conexao");
        conexao.close();
    }
}

