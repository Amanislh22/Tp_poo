import java.awt.*;

import static java.lang.Math.pow;
import static java.lang.Math.sqrt;
public class Cercle {
    private Point centre ;
    private float rayon;
    public Cercle(){
        this.rayon=0;
        this.centre= new Point();
    }
    public Cercle( Point centre, float rayon){
        this.centre=centre;
        this.rayon=rayon;
    }

    public float getRayon() {
        return rayon;
    }

    public Point getCentre() {
        return centre;
    }

    public void setCentre(Point centre) {
        this.centre = centre;
    }

    public void setRayon(float rayon) {
        this.rayon = rayon;
    }
    public void afficher(){
        System.out.println("rayon = " +rayon);
        System.out.println("centre = " +centre);
    }
    public double surface(){
        return pow(this.rayon,2)*3.14;
    }
    public double perimetre(){
        return 2*this.rayon*3.14;
    }
    public void equal(Cercle c){
        if ((this.rayon==c.rayon ) && (this.centre==c.centre)){
            System.out.println("equal");
        }else {
            System.out.println("not equal");
        }
    }
    public void agrandir( float r){
        if(r<=0){
            System.out.println("Le facteur d'agrandissement doit être supérieur à zéro.");
            return;
        }
        this.rayon*=r;
    }
}
