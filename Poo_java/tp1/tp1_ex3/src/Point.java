import static java.lang.Math.sqrt;

public class Point {
    private double x ,y;
    public static int cpt=0;

    public Point(double x , double y){
        this.x=x;
        this.y=y;
        this.cpt++;

    }
    public Point(){
        this.x=0;
        this.y=0;
        this.cpt++;
    }
    public void affiche (){
        System.out.println("x = " +x);
        System.out.println("y = " +y);
        System.out.println("le nombre d'objet de type point = " +cpt);
    }




}

