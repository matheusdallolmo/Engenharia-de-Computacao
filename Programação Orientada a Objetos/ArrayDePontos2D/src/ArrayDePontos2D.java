public class ArrayDePontos2D {
    private Ponto2D[] array;

    public ArrayDePontos2D(int n){
        array = new Ponto2D[n];
    }

    public int tamanho(){
        return array.length;
    }

    public void modifica(int posicao, Ponto2D ponto){
        if((posicao >= 0) && (posicao <= array.length))
            array[posicao] = ponto;
    }

    public Ponto2D valor(int posicao){
        if((posicao >= 0) && (posicao <= array.length))
            return array[posicao];
        else
            return null;
    }

    public String toString(){
        String str = "O array tem os seguintes "+array.length+" elementos:";
        for(int i = 0; i < array.length; i++)
            str += array[i]+", ";
        return str;
    }
}
