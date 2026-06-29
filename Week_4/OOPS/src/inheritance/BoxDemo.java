package inheritance;

public class BoxDemo {

    public static void main(String[] args) {

        Box box = new Box(5, 4);
        System.out.println("Area = " + box.area());

        Box3D box3D = new Box3D(5, 4, 3);
        System.out.println("Area = " + box3D.area());
        System.out.println("Volume = " + box3D.volume());
    }
}
