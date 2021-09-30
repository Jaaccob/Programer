public class Teacher extends Person {
    private String id;
    private double salary;

    public Teacher(String name, String lastName, String pesel, double salary) {
        super(name, lastName, pesel);
        this.salary = salary;
        this.id = "t" + getPesel();
    }

    public Teacher(String name, String lastName, String pesel) {
        super(name, lastName, pesel);
        this.salary = 2067.67;
        this.id = "t" + getPesel();
    }

    @Override
    public String getName() {
        return super.getName();
    }

    @Override
    public void setName(String name) {
        super.setName(name);
    }

    @Override
    public String getLastName() {
        return super.getLastName();
    }

    @Override
    public void setLastName(String lastName) {
        super.setLastName(lastName);
    }

    @Override
    public String getPesel() {
        return super.getPesel();
    }

    @Override
    public void setPesel(String pesel) {
        super.setPesel(pesel);
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public double getSalary() {
        return salary;
    }

    public void setSalary(double salary) {
        this.salary = salary;
    }
}
