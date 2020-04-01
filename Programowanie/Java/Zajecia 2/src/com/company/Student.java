package com.company;

public class Student extends User {
    private int semestr;
    private int index;

    public int getIndex() {
        return index;
    }

    public Student(String login, String password, int semestr, int index) {
        super(login, password);
        this.semestr = semestr;
        this.index = index;
    }

    public void print() {
        super.print();
        System.out.println(semestr);
    }


}
