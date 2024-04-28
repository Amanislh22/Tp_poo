public class Point {
    private int x, y;

    public Point(int xCoord, int yCoord) {
        this.x = xCoord;
        this.y = yCoord;
    }

    // Opérateur pré-incrémentation
    public Point increment() {
        ++x;
        ++y;
        return this;
    }

    // Opérateur post-incrémentation
    public Point increment(int dummy) {
        Point temp = new Point(this.x, this.y);
        this.increment();
        return temp;
    }

    public void afficher() {
        System.out.println("x = " + x + ", y = " + y);
    }

    public static void main(String[] args) {
        Point point = new Point(5, 10);

        System.out.println("Before increment:");
        point.afficher();

        // Pre-increment
        point.increment();
        System.out.println("After pre-increment:");
        point.afficher();

        // Post-increment
        Point temp = point.increment(0);
        System.out.println("After post-increment:");
        temp.afficher();
    }
}
