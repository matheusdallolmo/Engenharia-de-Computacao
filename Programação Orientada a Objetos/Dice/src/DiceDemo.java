public class DiceDemo{
    public static void main(String[] args){
        Dice d1 = new Dice();
        Dice d2 = new Dice();
        d1.roll();
        d2.roll();
        System.out.println("Dado 1: "+d1.getSideUp()+" Dado 2: "+d2.getSideUp()+" Soma: "+(d1.getSideUp()+d2.getSideUp()));
    }
}