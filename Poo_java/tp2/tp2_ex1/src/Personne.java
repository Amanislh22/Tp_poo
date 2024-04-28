public class Personne {
        private int age;
        private String nom;

        public Personne(int age, String nom) {
            this.nom = nom;
            this.age = age;
        }

        public int getAge() {
            return age;
        }

        public String getNom() {
            return nom;
        }

        public void setAge(int age) {
            this.age = age;
        }

        public void setNom(String nom) {
            this.nom = nom;
        }

        public void affiche() {
            System.out.println("le nom de la personne est : " + nom);
            System.out.println("l'age de la personne est : " + age);
        }
    }

