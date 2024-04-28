public class Point {
    private int x, y;

    public Point() {
        x = 0;
        y = 0;
        System.out.println("** constructeur 0 argument");
    }

    public Point(int abs) {
        x = abs;
        y = 0;
        System.out.println("** constructeur 1 argument");
    }

    public Point(int abs, int ord) {
        x = abs;
        y = ord;
        System.out.println("** constructeur 2 arguments");
    }

    public Point(Point p) {
        x = p.x;
        y = p.y;
        System.out.println("** constructeur par recopie");
    }

    public void affiche() {
        System.out.println("point de coordonnees : " + x + " " + y);
    }
}
