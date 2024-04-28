public class Main {
    public static void main(String[] args) {
        Personne p1 = new Personne(25, "Alex");
        Personne p2 = new Personne(30, "Bob");

        System.out.println(" ***** Personne 1 **** ");
        p1.affiche();

        System.out.println(" ***** Personne 2 **** ");
        p2.affiche();

        System.out.println("********aprés l'affectation ********");
        p1 = p2;
        p1.affiche();
    }
}
