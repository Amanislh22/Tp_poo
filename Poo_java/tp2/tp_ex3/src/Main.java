public class Main {
    public static void main(String[] args) {

            VoitureAutonome car1 = new VoitureAutonome(0.0, 50.0);
            VoitureAutonome car2 = new VoitureAutonome(10.0, 60.0);

            if (car1.equals(car2)) {
                System.out.println("Les voitures sont identiques.");
            } else {
                System.out.println("Les voitures sont différentes.");
            }

            VoitureAutonome totalDistance = car1.add(car2);
            System.out.println("Distance totale parcourue : " + totalDistance);

            car1.increment();
            System.out.println("Nouvelle vitesse de car1 : " + car1);

            VoitureAutonome remainingDistance = car1.subtract(car2);
            System.out.println("Distance restante : " + remainingDistance);

            VoitureAutonome resultMultiply = car1.multiply(car2);
            VoitureAutonome resultDivide = car1.divide(car2);

            System.out.println("Résultat de la multiplication : " + resultMultiply);
            System.out.println("Résultat de la division : " + resultDivide);
        }
    }


