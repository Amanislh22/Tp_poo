public class Main {
    public static void main(String[] args) {
        Point p1 = new Point(3, 5);

        System.out.print("Avant l'incrémentation : ");
        p1.afficher();

        Point p2 = p1.increment(); // pré-incrémentation

        System.out.print("Après la pré-incrémentation : ");
        p1.afficher();
        p2.afficher();

        Point p3 = p1.increment(0); // post-incrémentation

        System.out.print("Après la post-incrémentation : ");
        p1.afficher();
        p3.afficher();
    }
}