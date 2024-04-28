import static java.lang.Math.sqrt;

public class Point {
    private float x ,y;

    public Point(float x , float y){
        this.x=x;
        this.y=y;

    }
    public Point(){
        this.x=0;
        this.y=0;
    }
    public void affiche (){
        System.out.println("x = " +x);
        System.out.println("y = " +y);
    }

    public void deplace(float dx , float dy){
        this.x=this.x+dx;
        this.y=this.y+dy;
    }



}

