package interfaces;

public class ToTestInt {

    public static void main(String[] args) {
        Arithmetic arithmetic = new Arithmetic();

        int number = 5;
        System.out.println("Square of " + number + " = " +
                arithmetic.square(number));
    }
}
