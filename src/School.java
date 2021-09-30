import java.util.ArrayList;

public class School {
    private ArrayList<Student> studentList;
    private ArrayList<Teacher> teacherList;

    public School() {
        this.studentList = new ArrayList<>();
        this.teacherList = new ArrayList<>();
    }

    public boolean addStudent(Student student) {
        try {
            studentList.add(student);
        } catch (RuntimeException e) {
            System.out.println("RuntimeException " + e);
            return false;
        }
        return true;
    }

    public boolean addTeacher(Teacher teacher) {
        try {
            teacherList.add(teacher);
        } catch (RuntimeException e) {
            System.out.println("RuntimeException: " + e);
            return false;
        } catch (Exception e) {
            System.out.println("Exception: " + e);
            return false;
        }
        return true;
    }

    public void print() {
        for (Student s : studentList) {
            System.out.println(s);
        }
        for (Teacher t : teacherList) {
            System.out.println(t);
        }
    }
}
