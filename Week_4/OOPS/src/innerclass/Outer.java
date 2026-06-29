package innerclass;

public class Outer {

    public void display() {
        System.out.println("Display method of Outer class");
    }

    class Inner {

        public void display() {
            System.out.println("Display method of Inner class");
        }
    }
}
