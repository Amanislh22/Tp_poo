import static java.lang.Math.sqrt;
public class Point {
    private double x ,y;
    private char name ;

    public char getName() {
        return name;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    public void setName(char name) {
        this.name = name;
    }

    public void setX(double x) {
        this.x = x;
    }

    public void setY(double y) {
        this.y = y;
    }
    public Point(double x , double y , char name){
        this.x=x;
        this.y=y;
        this.name=name;
    }
    public Point(){
        this.x=0;
        this.y=0;
        this.name='O';
    }
    public void affiche (){
        System.out.println("x = " +x);
        System.out.println("y = " +y);
        System.out.println("name = " +name);
    }

    public void translation(double dx , double dy){
        this.x=this.x+dx;
        this.y=this.y+dy;
    }
    public Point milieu(Point p){
        Point m = new Point();
        m.x=(this.x+p.x)/2;
        m.y=(this.y+p.y)/2;
        return m;
    }
    public Point symetrique(){
        Point s = new Point();
        s.x = -this.x;
        s.y = -this.y;
        return s;
    }

    public double distance(Point p2){
        return sqrt((p2.y - this.y) * (p2.y - this.y) + (p2.x - this.x) * (p2.x - this.x));
    }
    public void comparer(Point p2){
        if ( this.x==p2.x && this.y ==p2.y){
            System.out.println("identique");
        }else{
            System.out.println("pas identique");
        }
    }
}
