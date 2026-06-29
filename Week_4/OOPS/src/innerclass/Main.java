package innerclass;

public class Main {

    public static void main(String[] args) {

        Outer outer = new Outer();
        outer.display();

        Outer.Inner inner = outer.new Inner();
        inner.display();
    }
}
