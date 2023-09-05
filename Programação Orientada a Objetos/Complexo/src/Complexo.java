import java.lang.Math;

public class Complexo{
    private double n_real;
    private double imaginario;

    public void inicializa_numero(double n_real, double imaginario){
        this.n_real = n_real;
        this.imaginario = imaginario;
    }

    public void imprime_numero(){
        System.out.println("Numero Complexo: "+n_real+" + "+imaginario+"i");
    }

    public boolean eIgual(Complexo outro){
        if(n_real == outro.n_real && imaginario == outro.imaginario)
            return true;
        else
            return false;
    }

    public void soma(Complexo outro){
        n_real += outro.n_real;
        imaginario += outro.imaginario;
    }

    public void subtrai(Complexo outro){
        n_real -= outro.n_real;
        imaginario -= outro.imaginario;
    }

    public void multiplica(Complexo outro){
        double aux_real, aux_imaginario;
        aux_real = (n_real * outro.n_real) - (imaginario * outro.imaginario);
        aux_imaginario = (n_real * outro.imaginario) + (imaginario * outro.n_real);
        n_real = aux_real;
        imaginario = aux_imaginario;
    }

    public void divide(Complexo outro){
        double aux_real, aux_imaginario;
        aux_real = ((n_real * outro.n_real) + (imaginario * outro.imaginario)) / (Math.pow(outro.n_real, 2) + Math.pow(outro.imaginario, 2));
        aux_imaginario = ((imaginario * outro.n_real) - (n_real * outro.imaginario)) / (Math.pow(outro.n_real, 2) + Math.pow(outro.imaginario, 2));
        n_real = aux_real;
        imaginario = aux_imaginario;
    }

    public Complexo(){
        n_real = 0; imaginario = 0;
    }

    public Complexo(double n_real, double imaginario){
        this.n_real = n_real; this.imaginario = imaginario;
    }
}