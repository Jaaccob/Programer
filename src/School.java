import java.util.ArrayList;

/**
 * Obiekt <code>School</code> reprezentuje szkołę podstawową.
 * Obiekt jest reprezentowany przez 4 parametry:
 *
 * <code>studentList</code> - reprezentuje listę uczniów w szkole
 * <code>teacherList</code> - reprezentuje listę nauczycieli w szkole
 * <code>totalMoneyEarned</code> - reprezentuje całkowitą kwotę zarabianą przez szkołę
 * <code>totalMoneySpent</code> - reprezentuje całkowitą kwotę wydatków przez szkołę
 *
 * @author Jacob
 * @version 1.0
 */
public class School {
    private ArrayList<Student> studentList;
    private ArrayList<Teacher> teacherList;
    private static double totalMoneyEarned = 0;
    private static double totalMoneySpent = 0;

    public School() {
        this.studentList = new ArrayList<>();
        this.teacherList = new ArrayList<>();
    }

    public boolean addStudent(Student student) {
        try {
            studentList.add(student);
            totalMoneyEarned += 6110;
        } catch (RuntimeException e) {
            System.out.println("RuntimeException " + e);
            return false;
        }
        return true;
    }

    public boolean addTeacher(Teacher teacher) {
        try {
            teacherList.add(teacher);
            totalMoneySpent += teacher.getSalary();
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

    public void money() {
        System.out.println("Earned: " + totalMoneyEarned + ", spent: " + totalMoneySpent);
    }
}
