public class VoitureAutonome {
    private double position;
    private double vitesse;
    private double distanceParcourue;

    public VoitureAutonome(double pos, double vit) {
        this.position = pos;
        this.vitesse = vit;
        this.distanceParcourue = 0.0;
    }

    public boolean equals(VoitureAutonome other) {
        return this.position == other.position && this.vitesse == other.vitesse;
    }

    public boolean notEquals(VoitureAutonome other) {
        return !this.equals(other);
    }

    public boolean lessThan(VoitureAutonome other) {
        return this.position < other.position;
    }

    public boolean greaterThan(VoitureAutonome other) {
        return this.position > other.position;
    }

    public boolean lessThanOrEqual(VoitureAutonome other) {
        return !this.greaterThan(other);
    }

    public boolean greaterThanOrEqual(VoitureAutonome other) {
        return !this.lessThan(other);
    }

    public VoitureAutonome add(VoitureAutonome other) {
        VoitureAutonome result = new VoitureAutonome(this.position, this.vitesse);
        result.distanceParcourue += other.distanceParcourue;
        return result;
    }

    public VoitureAutonome increment() {
        this.vitesse++;
        return this;
    }

    public VoitureAutonome subtract(VoitureAutonome other) {
        VoitureAutonome result = new VoitureAutonome(this.position, this.vitesse);
        result.distanceParcourue -= other.distanceParcourue;
        return result;
    }

    public VoitureAutonome multiply(VoitureAutonome other) {
        VoitureAutonome result = new VoitureAutonome(this.position, this.vitesse);
        return result;
    }

    public VoitureAutonome divide(VoitureAutonome other) {
        VoitureAutonome result = new VoitureAutonome(this.position, this.vitesse);
        return result;
    }

    @Override
    public String toString() {
        return "Position: " + this.position + ", Vitesse: " + this.vitesse + ", Distance Parcourue: " + this.distanceParcourue;
    }

}