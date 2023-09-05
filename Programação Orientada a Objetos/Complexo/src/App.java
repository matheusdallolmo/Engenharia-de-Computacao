public class App {
    public static void main(String[] args){
        Complexo r1 = new Complexo();
        Complexo r2 = new Complexo(2, 4);

        r1.inicializa_numero(3, 5);

        r1.imprime_numero();
        r2.imprime_numero();

        if(r1.eIgual(r2))
            System.out.println("\nOs numeros r1 e r2 são inguais");
        else
            System.out.println("\nOs numeros r1 e r2 são diferente");
        
        System.out.println("Soma: ");
        r1.soma(r2);
        r1.imprime_numero();

        System.out.println("Subtração: ");
        r1.subtrai(r2);
        r1.imprime_numero();

        System.out.println("Multiplicação: ");
        r1.multiplica(r2);
        r1.imprime_numero();

        System.out.println("Divisão: ");
        r1.divide(r2);
        r1.imprime_numero();
    }
}
