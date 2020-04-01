package com.company;

public class User {
    //Zadanie 1
    //private String login;
    //private String password;
    protected String login;
    protected String password;

    public User(String login, String password) {
        this.login = login;
        this.password = password;
    }

    //equals - porównywanie tych samych typów
    public boolean authorize(String log, String pass) {
        return this.login.equals(log) && this.password.equals(pass);
    }

    public void print() {
        System.out.println(login);
        System.out.println(password);
    }
    //Zadanie 1
}
