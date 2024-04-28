public class TestPoint {
    public static void main(String[] args) {

        Point p = new Point(5,4,'A');
        System.out.println("point A : ");
        p.affiche();
        p.translation(1,1);
        System.out.println(" translation");
        p.affiche();

        Point p2 = new Point(6.1,8,'B');
        System.out.println(" point B :");
        p2.affiche();

        System.out.println(" Distance entre A et B");
        System.out.println(p.distance(p2));

        System.out.println("le point milieu de point A et B");
        Point m = p.milieu(p2);
        m.setName('m');
        m.affiche();

        System.out.println("le point symetrique de  A");
        Point s = p.symetrique();
        s.setName('s');
        s.affiche();

        System.out.println(" comparaison entre A et B");
        p.comparer(p2);

        System.out.println(" creation d'une point identique a A ");
        Point I =new Point();
        I=p;
        p.comparer(I);


    }
}