package unicesumar.adsis1na;

import java.util.Random;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();
        String userOne, userTwo, passwordUserOne, passwordUserTwo;
        double balanceUserOne = random.nextDouble(100, 10000);
        double balanceUserTwo = random.nextDouble(100, 10000);
        boolean loggedUserOne = false;
        boolean loggedUserTwo = false;
        int option;

        System.out.print("Cadastro do primeiro usuario\nInforme o usuario: ");
        userOne = scanner.nextLine();
        System.out.printf("Informe a senha do usuario %s: ", userOne);
        passwordUserOne = scanner.nextLine();
        System.out.println("\nCadastro efetuado com sucesso.\n\n");

        System.out.print("Cadastro do segundo usuario\nInforme o usuario: ");
        userTwo = scanner.nextLine();
        System.out.printf("Informe a senha do usuario %s: ", userTwo);
        passwordUserTwo = scanner.nextLine();
        System.out.println("\nCadastro efetuado com sucesso.\n\n");
        System.out.println("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

        do {
            do {
                System.out.print("=====================\n\nInforme o usuario: ");
                String userAccess = scanner.next();
                System.out.print("Senha: ");
                String passwordAccess = scanner.next();
                if (String.valueOf(userAccess).equals(userOne) && String.valueOf(passwordAccess).equals(passwordUserOne)) {
                    System.out.println("Usuario e senha corretos. \n\n\n\n\nSeja bem-vindo " + userOne.toUpperCase());
                    loggedUserOne = true;
                    loggedUserTwo = false;
                } else if (String.valueOf(userAccess).equals(userTwo) && String.valueOf(passwordAccess).equals(passwordUserTwo)) {
                    System.out.println("Usuario e senha corretos. \n\n\n\n\nSeja bem-vindo " + userTwo.toUpperCase());
                    loggedUserTwo = true;
                    loggedUserOne = false;
                } else {
                    System.out.println("Usuario ou senha incorreto.\n\n\nPor favor tente novamente...");
                }
            } while (!loggedUserOne && !loggedUserTwo);

            do {
                System.out.print("\n=== SELECIONE UMA OPCAO ABAIXO ===\n1 - SALDO\n2 - DEPOSITAR\n3 - SACAR\n4 - TRANSFERIR\n9 - SAIR DA CONTA\n==================================\nOpcao: ");
                option = scanner.nextInt();
                switch (option) {
                    case 1:
                        if (loggedUserOne) {
                            System.out.printf("\n%s seu SALDO: %.2f\n", userOne, balanceUserOne);
                        } else {
                            System.out.printf("\n%s seu SALDO: %.2f\n", userTwo, balanceUserTwo);
                        }
                        break;
                    case 2:
                        System.out.println("Informe o valor que deseja depositar?");
                        double value = scanner.nextDouble();
                        while (value > 0) {
                            if (loggedUserOne) {
                                balanceUserOne += value;
                                System.out.printf("%s,\nSeu saque no valor de R$ %.2f foi efetuado com sucesso, seu novo saldo e de R$ %.2f.", userOne, value, balanceUserOne);
                                break;
                            } else {
                                balanceUserTwo += value;
                                System.out.printf("%s,\nSeu saque no valor de R$ %.2f foi efetuado com sucesso, seu novo saldo e de R$ %.2f.", userTwo, value, balanceUserTwo);
                                break;
                            }
                        }
                        break;
                    case 3:
                        System.out.println("Informe o valor que deseja sacar: ");
                        value = scanner.nextDouble();
                        while ((value > 0 && loggedUserOne && value <= balanceUserOne) || (value > 0 && loggedUserTwo && value <= balanceUserTwo)) {
                            if (loggedUserOne) {
                                balanceUserOne -= value;
                                System.out.printf("%s,\nSeu saque no valor de R$ %.2f foi efetuado com sucesso, seu novo saldo e de R$ %.2f.", userOne, value, balanceUserOne);
                                break;
                            } else {
                                balanceUserTwo -= value;
                                System.out.printf("%s,\nSeu saque no valor de R$ %.2f foi efetuado com sucesso, seu novo saldo e de R$ %.2f.", userTwo, value, balanceUserTwo);
                                break;
                            }
                        }
                        break;
                    case 4:
                        System.out.println("Informe o valor que deseja transferir: ");
                        value = scanner.nextDouble();
                        while ((value > 0 && loggedUserOne && value <= balanceUserOne) || (value > 0 && loggedUserTwo && value <= balanceUserTwo)) {
                            if (loggedUserOne) {
                                balanceUserOne -= value;
                                balanceUserTwo += value;
                                System.out.printf("%s,\nA sua transferencia no valor de R$ %.2f foi efetuado com sucesso para a conta de %s, seu novo saldo e de R$ %.2f.", userOne, value, userTwo, balanceUserOne);
                                break;
                            } else {
                                balanceUserTwo -= value;
                                balanceUserOne += value;
                                System.out.printf("%s,\nA sua transferencia no valor de R$ %.2f foi efetuado com sucesso para a conta de %s, seu novo saldo e de R$ %.2f.", userTwo, value, userOne, balanceUserTwo);
                                break;
                            }
                        }
                    case 9:
                        System.out.println("Obrigado, ate a proxima. :)\n\n\n\n\n");
                        break;
                    default:
                        System.out.println("\nInforme uma opcao valida.\n");
                }
            } while (option != 9);
            System.out.print("\nDeseja Acessar outra conta ou finalizar a sessão?\n1 - Acessar outra conta.\n9 - Para finalizar a sessão\nOpcao: ");
            option = scanner.nextInt();
        } while (option != 9);
    }
}