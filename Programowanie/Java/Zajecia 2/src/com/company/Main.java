package com.company;

import javax.swing.*;

public class Main {

    public static void main(String[] args) {
        //Zadanie 1
        User user = new User("login", "haslo");
        System.out.println(user.authorize("login", "haslo"));
        user.print();
        //Zadanie 2
        Teacher teacher = new Teacher("log", "pass", "dawkowana");
        teacher.print();
        //Zadanie 3
        Student student = new Student("logi", "passwd", 3, 3);
        student.print();
        //Zadanie 4
        Student student1 = new Student("logi", "passwd", 3, 4);
        Student student2 = new Student("logi", "passwd", 3, 7);
        Subject subject = new Subject("informatyka", 2, teacher);
        System.out.println(subject.addStudent(student));
        System.out.println(subject.addStudent(student1));
        System.out.println(subject.addStudent(student2));
        //Zadanie 5
        Wrapper isFound = new Wrapper();
        Student student3 = subject.searchStudent(4, isFound);
        if (isFound.b) {
            student3.print();
        }
        //Zadanie 6
        Subject subject61 = new Subject("informatyka", 2, teacher);
        Subject subject62 = new Subject("ASK", 2, teacher);
        Subject subject63 = new Subject("analiza", 2, teacher);
        Subject subject64 = new Subject("matematyka", 2, teacher);
        Subject subjects[] = {subject61,subject62,subject63,subject64};
        subject61.addStudent(student1);
        subject63.addStudent(student1);


        Subject przed[] = Subject.list(subject[],student1);
        for (int i=0; i<przed.length; i++){
            System.out.println(przed[i].getName());
        }
    }
}
