public class App {
    public static void main(String[] args){
        Rational r1 = new Rational(28, 56);
        Rational r2 = new Rational(2,4);
        
        System.out.println("Primeiro número racional informado");
        r1.ImprimeRational();
        r1.ImprimeFloat(2);
        System.out.println("\nSegundo número racional informado");
        r2.ImprimeRational();
        r2.ImprimeFloat(2);

        System.out.println("\nResultado da Soma");
        r1.Soma(r2);
        r1.ImprimeRational();
        r1.ImprimeFloat(2);

        System.out.println("\nResultado da Subtração");
        r1.Subtrai(r2);
        r1.ImprimeRational();
        r1.ImprimeFloat(2);

        System.out.println("\nResultado da Multiplicação");
        r1.Multiplica(r2);
        r1.ImprimeRational();
        r1.ImprimeFloat(2);

        System.out.println("\nResultado da Divisão");
        r1.Divide(r2);
        r1.ImprimeRational();
        r1.ImprimeFloat(2);
    }
}
