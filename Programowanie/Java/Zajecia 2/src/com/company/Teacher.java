package com.company;

public class Teacher extends User {
    //Zadanie 2
    private String jednostka;

    public Teacher(String login, String password, String jednostka) {
        super(login, password);
        this.jednostka = jednostka;
    }

    public void print() {
        super.print();
        System.out.println(this.jednostka);
    }
}
