public class Main {
    public static void main(String[] args) {
        Ppoint point = new Ppoint(5, 10);
        point.afficher();

        System.out.println("After increment:");
        point.increment().afficher();

        System.out.println("After decrement:");
        point.decrement().afficher();
    }
}