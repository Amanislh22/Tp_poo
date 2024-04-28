import static java.lang.Math.sqrt;

public class Point {
    private double x ,y;

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    public void setX(double x) {
        this.x = x;
    }

    public void setY(double y) {
        this.y = y;
    }
    public Point(double x , double y){
        this.x=x;
        this.y=y;

    }
    public Point(){
        this.x=0;
        this.y=0;
    }


    public void deplace(double dx , double dy){
        this.x=this.x+dx;
        this.y=this.y+dy;
    }



}

