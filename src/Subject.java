/**
 * Obiekt abstrykcyjny <code>Subject</code> odpowiedzialny za reprezentowanie przedmiotu szkolnego
 * Obiekt jest reprezentowany przez 3 parametry: <br>
 * <code>name</code> - nazwa przedmiotu.
 * <code>frequency</code> - częstotliwość występowania w 1 tygodniu.
 *
 * @author Jacob
 * @version 1.0
 */

public class Subject {
    private String name;
    private int frequency;

    public Subject(String name, int frequency) {
        this.name = name;
        this.frequency = frequency;
    }

    @Override
    public String toString() {
        return "Subject{" +
                "name='" + name + '\'' +
                ", frequency=" + frequency +
                '}';
    }
}
