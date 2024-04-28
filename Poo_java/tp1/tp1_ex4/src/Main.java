public class Main {
    public static void main(String[] args) {

        Point a = new Point(10, 20);
        Point b = new Point(30, 40);
        Point[] courbe = { new Point(4), a, new Point(), b };

        for (int i = 0; i < 4; i++) {
            courbe[i].affiche();
        }
    }
}