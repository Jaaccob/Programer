public class Student extends Person {
    private int classNumber;
    private String classGroup;
    private String id;

    public Student(String name, String lastName, String pesel, int classNumber, String classGroup) {
        super(name, lastName, pesel);
        this.classGroup = classGroup;
        this.classNumber = classNumber;
        this.id = this.setId();
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
        return this.id;
    }

    public String setId() {
        return "s" + getPesel();
    }
}
