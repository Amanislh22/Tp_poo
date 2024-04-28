import java.awt.*;

public class TestCercle {
    public static void main(String[] args) {
        Cercle c1= new Cercle(new Point(5,4),4);
        c1.afficher();
        System.out.println("surface = "+c1.surface());
        System.out.println("perimetre = "+c1.perimetre());System.out.println("perimetre = "+c1.perimetre());
        System.out.println("calling agrandir funtion");
        c1.agrandir(4);
        c1.afficher();
        Cercle c2= new Cercle(new Point(5,4),4);
        c1.equal(c2);

    }
}