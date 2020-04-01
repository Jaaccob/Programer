package com.company;

import java.security.PublicKey;

class Wrapper {
    boolean b;

}

public class Subject {
    //Korzystanie z innej klasy - agregacja
    //Zadanie 4
    private String subject;
    private int maxStudentow;
    private Teacher nauczyciel;
    private Student[] students;
    private int count = 0;

    public String getName(){
        return Subject;
    }

    public Subject(String subject, int maxStudentow, Teacher nauczyciel) {
        this.subject = subject;
        this.maxStudentow = maxStudentow;
        this.nauczyciel = nauczyciel;
        students = new Student[maxStudentow];
    }

    public boolean addStudent(Student student) {
        if (count < maxStudentow) {
            students[count] = student;
            count++;
            return true;
        } else return false;
    }

    //Zadanie 5
    public Student searchStudent(int index, Wrapper isFound) {
        for (int i = 0; i < maxStudentow; i++) {
            if (index == students[i].getIndex()) {
                isFound.b = true;
                return students[i];
            }
        }
        isFound.b = false;
        return null;
    }

    //Zadanie 6
    //Konstruktor kopiujący to taki z własnym typem zmiennej
    public Subject(Subject przedmiot) {
        this.subject = przedmiot.subject;
        this.maxStudentow = przedmiot.maxStudentow;
        this.count = przedmiot.count;
        this.nauczyciel = przedmiot.nauczyciel;
        this.students = new Student[maxStudentow];
    }

    //Zadanie 7
    public static Subject[] list(Subject[] subjects, Student student) {
        Wrapper ifFound = new Wrapper();
        int a=0;
        for(int i=0; i< subjects.length; i++){
            subjects[i].searchStudent(student.getIndex(),ifFound);
            if (ifFound.b){
                a++;
            }
        }
        Subject[] wynik = new Subject[a];
        for(int i=0, j=0; i< subjects.length; i++){
            subjects[i].searchStudent(student.getIndex(),ifFound);
            if (ifFound.b){
                wynik[j++]=subjects[i];
            }
        }
        return wynik;
    }
}
