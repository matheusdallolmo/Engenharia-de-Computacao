import java.util.Random;

public class Dice{
    private int sideUp;
    public Dice(){
        sideUp = 1;
    }
    public int getSideUp(){
        return sideUp;
    }
    public void roll(){
        Random x = new Random();
        sideUp = x.nextInt(6) + 1;
    }
}
