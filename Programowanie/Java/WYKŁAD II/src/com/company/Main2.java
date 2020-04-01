package com.company;

import java.util.StringTokenizer;

public class Main2 {

    public static void main(String[] args) //throws TrojmianErrorException{
    {
        try {
            Trojmian tr0 = new Trojmian(1.0, 2.0, 3.0);
            Trojmian tr1 = new Trojmian(0.0, 2.0, 3.0);
        } catch (TrojmianErrorException e) {
            System.out.println("Wystąpoł błąd: "+e.getMessage());
            e.printStackTrace();
        }
        System.out.println("Koniec");
    }
}
