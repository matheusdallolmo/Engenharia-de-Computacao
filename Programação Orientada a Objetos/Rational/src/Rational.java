public class Rational{
    private int numerator;
    private int denominator;

    public Rational(){
        numerator = 0;
        denominator = 1;
    }

    public Rational(int numerator, int denominator){
        do{
            if(numerator%2==0 && denominator%2==0){
                numerator = numerator/2;
                denominator = denominator/2;
            }
            if(numerator%3==0 && denominator%3==0){
                numerator = numerator/3;
                denominator = denominator/3;
            }
            if(numerator%5==0 && denominator%5==0){
                numerator = numerator/5;
                denominator = denominator/5;
            }
            if(numerator%7==0 && denominator%7==0){
                numerator = numerator/7;
                denominator = denominator/7;
            }
        }while((numerator%2==0 && denominator%2==0) || (numerator%3==0 && denominator%3==0) || (numerator%5==0 && denominator%5==0) || (numerator%7==0 && denominator%7==0));
        this.numerator = numerator;
        this.denominator = denominator;
    }

    public void ImprimeRational(){
        if(numerator == denominator)
            System.out.println("Formato racional: 1");
        else
            System.out.println("Número em formato racional: "+numerator+"/"+denominator);
    }

    public void ImprimeFloat(int n){
        double aux = (double)numerator / denominator;
        System.out.print("Número em formato de ponto flutuante: "+(int)aux+".");
        for(int i = 0; i < n; i++){
            aux -= (int)aux;
            aux *= 10;
            System.out.print((int)aux);
        }
    }

    public void Simplifica(){
        do{
            if(numerator%2==0 && denominator%2==0){
                numerator = numerator/2;
                denominator = denominator/2;
            }
            if(numerator%3==0 && denominator%3==0){
                numerator = numerator/3;
                denominator = denominator/3;
            }
            if(numerator%5==0 && denominator%5==0){
                numerator = numerator/5;
                denominator = denominator/5;
            }
            if(numerator%7==0 && denominator%7==0){
                numerator = numerator/7;
                denominator = denominator/7;
            }
        }while((numerator%2==0 && denominator%2==0) || (numerator%3==0 && denominator%3==0) || (numerator%5==0 && denominator%5==0) || (numerator%7==0 && denominator%7==0));
    }

    public void Soma(Rational outro){
        numerator = denominator * outro.numerator + numerator * outro.denominator;
        denominator *= outro.denominator;
        Simplifica();
    }

    public void Subtrai(Rational outro){
        numerator = numerator * outro.denominator - denominator * outro.numerator;
        denominator *= outro.denominator;
        Simplifica();
    }

    public void Multiplica(Rational outro){
        numerator *= outro.numerator;
        denominator *= outro.denominator;
        Simplifica();
    }

    public void Divide(Rational outro){
        numerator *= outro.denominator;
        denominator *= outro.numerator;
        Simplifica();
    }
}