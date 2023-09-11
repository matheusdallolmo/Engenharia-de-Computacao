public class Banco {
    public static void main(String[] args){
        ContaBancaria2[] meuBanco = new ContaBancaria2[10];

        meuBanco[0] = new ContaBancaria2("Abel", 1000);
        meuBanco[2] = new ContaBancaria2("Julia", 2000);
        meuBanco[4] = new ContaBancaria2("Luis", 500);
        meuBanco[6] = new ContaBancaria2("Marcia", 50);
        meuBanco[8] = new ContaBancaria2("Pedro", 125);

        System.out.print("Valor total no banco: "+total(meuBanco));
    }

    public static double total(ContaBancaria2[] x){
        double total = 0;
        for(ContaBancaria2 b : x){
            if(b != null)
                total += b.getSaldo();  
        }
        return total;
    }
}
