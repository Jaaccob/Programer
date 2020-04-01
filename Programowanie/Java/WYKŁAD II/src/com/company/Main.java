package com.company;

import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) {

        String str = "Ala ma kota, a Ola ma psa.";
        StringTokenizer strtok = new StringTokenizer(str);

        while (strtok.hasMoreElements()) {
            System.out.println(strtok.nextToken() + "[");
        }
        str = "Ala ma kota,a Ola ma psa.";
        StringTokenizer strtok1 = new StringTokenizer(str, ",.");

        while (strtok1.hasMoreElements()) {
            System.out.println(strtok1.nextToken() + "[");
        }
        StringTokenizer strtok2 = new StringTokenizer(str, ",.", true);

        while (strtok2.hasMoreElements()) {
            System.out.println(strtok2.nextToken() + "[");
        }
        String str1 = "(j23+ 45)*2-(a+ b)";
        StringTokenizer strtok4 = new StringTokenizer(str1, "()+-*/", true);

        while (strtok4.hasMoreElements()) {
            String tok = strtok4.nextToken().trim();        //pozbywanie sie spacji
            if (tok.length() > 0) {
                System.out.println(tok);
            }
        }


        //Kolejny temat

        int[] tab = new int[6];
        try {
            //tab[6] = 100;
            System.out.println("Ok");
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Index poza granicami " + e.getMessage());
        } catch (Exception e) {
            System.out.println("Wystąpił inny błąd " + e.getMessage());
        } finally {
            System.out.println("Koniec konstrukcji try");
        }
        System.out.println("Koniec programu");


    }
}
