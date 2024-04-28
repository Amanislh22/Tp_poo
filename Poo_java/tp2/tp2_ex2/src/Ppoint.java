public class Ppoint {
    private int x;
    private int y;

    public Ppoint(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public int getY() {
        return this.y;
    }

    public int getX() {
        return this.x;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public void afficher() {
        System.out.println(" abs = " + x);
        System.out.println(" ord = " + y);
    }

    public Ppoint increment() {
        this.x++;
        this.y++;
        return this;
    }

    public Ppoint decrement() {
        this.x--;
        this.y--;
        return this;
    }
}
