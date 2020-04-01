package com.company;

import org.w3c.dom.ls.LSInput;

import java.awt.print.Pageable;
import java.io.Console;
import java.lang.reflect.Array;
import java.math.BigDecimal;
import java.math.BigInteger;
import java.util.*;

import java.util.Random;

public class Main {

    public static void main(String[] args) {
        //Rozdział 1.1.1
        System.out.println("Rozdział 1.1.1");
        System.out.println("Witaj, świecie!");
        //Komentarz
        /*
        Dłuższy komentarz
        */
        //Rozdział 1.1.3
        System.out.println("Rozdział 1.1.3");
        System.out.println("Witaj świecie".length());
        Random generator = new Random();
        System.out.println(generator.nextInt());
        System.out.println(generator.nextInt());
        //Rozdział 1.2.1
        System.out.println("Rozdział 1.2.1");
        System.out.println("Int: " + Integer.MIN_VALUE);
        System.out.println(Integer.MAX_VALUE);
        System.out.println("Long: " + Long.MIN_VALUE);
        System.out.println(Long.MAX_VALUE);
        System.out.println("Short: " + Short.MIN_VALUE);
        System.out.println(Short.MAX_VALUE);
        System.out.println("Byte: " + Byte.MIN_VALUE);
        System.out.println(Byte.MAX_VALUE);
        int zmienna = 1_000_000;
        System.out.println(zmienna);
        //Rozdział 1.2.3
        System.out.println("Rozdział 1.2.3");
        System.out.println("1.Witaj świecie\nWitaj świecie");
        System.out.println("2.Witaj świecie\rWitaj świecie");
        System.out.println("3.Witaj świecie\tWitaj świecie");
        System.out.println("4.Witaj świecie\bWitaj świecie");
        //Rozdział 1.4.2
        System.out.println("Rozdział 1.4.2");
        int n = 3;
        System.out.println(2 + n + 1);
        System.out.println(17 / 5);
        System.out.println(17.0 / 5);
        System.out.println(17 % 5);
        System.out.println(Math.floorMod(6, 4));
        //Rozdział 1.4.3
        System.out.println("Rozdział 1.4.3");
        System.out.println(Math.pow(3, 5));
        System.out.println(Math.sqrt(4));
        System.out.println(Math.min(2, 5));
        System.out.println(Math.max(2, 5));
        System.out.println(Math.PI);
        System.out.println(Math.E);
        System.out.println(Math.multiplyExact(10000000, 3));
        System.out.println(Math.addExact(3, 5));
        System.out.println(Math.subtractExact(3, 6));
        System.out.println(Math.incrementExact(4));
        System.out.println(Math.decrementExact(2));
        System.out.println(Math.negateExact(2));
        System.out.println(n < 12 ? "am" : "pm");
        //Rozdział 1.4.6
        System.out.println("Rozdział 1.4.6");
        BigInteger w = BigInteger.valueOf(910283193182L);
        System.out.println(BigDecimal.valueOf(2, 0).subtract(BigDecimal.valueOf(11, 1)));
        //Rozdział 1.5.1
        System.out.println("Rozdział 1.5.1");
        String names = String.join(", ", "Piotr", "Paweł", "Maria");
        System.out.println(names);
        //Rozdział 1.5.2
        System.out.println("Rozdział 1.5.2");
        String greeting = "Witaj, świecie!";
        String location = greeting.substring(3, 12);
        System.out.println(location);
        String name = "Piotr, Paweł, Maria";
        String[] result = name.split(", ");
        for (int i = 0; i < 3; i++) {
            System.out.println(result[i]);
        }
        //Rozdział 1.5.3
        System.out.println("Rozdział 1.5.3");
        System.out.println(location.equals("Świat"));
        String first = "a";
        String second = "B";
        System.out.println(first.compareTo(second));                                                                    //Porównuje ciąg znaków i zwraca różnice B-a
        //Rozdział 1.5.4
        System.out.println("Rozdział 1.5.4");
        int liczba = 42;
        String str = Integer.toString(liczba);                                                                          //Konwersja liczby na znaki
        System.out.println(str);
        str = Integer.toString(liczba, 2);
        System.out.println(str);                                                                                        //Konwersja liczby na znaki w sys 2
        str = "10111";
        liczba = Integer.parseInt(str);                                                                                 //Konwersja ciągu znaków na liczbe
        System.out.println(liczba);
        liczba = Integer.parseInt(str, 2);                                                                         //Konwersja ciągu znaków w sys 2 na liczbe
        System.out.println(liczba);
        str = Double.toString(3.14);
        System.out.println(str);
        double x = Double.parseDouble(str);
        System.out.println(x);
        //Rozdział 1.5.5
        System.out.println("Rozdział 1.5.5");
        str = "     Świat jest piękny!!!     ";
        System.out.println(str);
        System.out.println(str.startsWith("Świat"));
        System.out.println(str.endsWith("!"));
        System.out.println(str.contains("jest"));
        System.out.println(str.contains("t j"));
        System.out.println(str.indexOf("je"));                                                                          //Liczy na której pozycji jest wystąpienie
        System.out.println(str.lastIndexOf(" "));
        System.out.println(str.indexOf("e", 3));
        String newstring = "zmieniony na to co nie widać!!!";
        System.out.println(str.replace(str, newstring));
        System.out.println(str.toUpperCase());
        System.out.println(str.toLowerCase());
        System.out.println(str.trim());
        //Rozdział 1.5.6
        System.out.println("Rozdział 1.5.6");
        char ch = str.charAt(19);
        System.out.println(ch);
        int codePoint = str.codePointAt(str.offsetByCodePoints(0, 19));
        System.out.println(codePoint);
        int length = str.codePointCount(0, str.length());
        System.out.println(length);
        int[] codePoints = str.codePoints().toArray();
        for (int i = 0; i < length; i++) {
            System.out.print(codePoints[i] + ",");
        }
        //Rozdział 1.6.1
        System.out.println("\nRozdział 1.6.1");
        Scanner in = new Scanner(System.in);
        System.out.println("Jak sie nazywasz?");
        //String nam = in.nextLine();
        //System.out.println(nam);
        //nam = in.next();
        //System.out.println(nam);
        System.out.println("Ile masz lat?");
        //int age = in.nextInt();
        //System.out.println(age);
        //if (in.hasNextInt()){
        //     age = in.nextInt();
        //    System.out.println(age);
        //}
        Console terminal = System.console();
        //String username = terminal.readLine("Nazwa użytkownika: ");
        //char[] passwd  = terminal.readPassword("Hasło: ");
        //System.out.println(username);
        //Rozdział 1.6.2
        System.out.println("\nRozdział 1.6.2");
        System.out.printf("%12.3f", 1000.0 / 3.0);
        int age = 12;
        System.out.printf("Witaj, %s. Za rok bedziesz mieć %d lat.\n", name, age);
        System.out.printf("%,#2f", 100000.0 / 3.0);
        //Rozdział 1.8.3
        System.out.println("\nRozdział 1.8.3");
        ArrayList<String> friends;
        friends = new ArrayList<>();
        friends.add("Piotr");
        friends.add("Paweł");
        friends.remove(1);
        friends.add(0, "Paweł");
        String pierwszy = friends.get(0);
        System.out.printf("Piewsza osoba to: %s", pierwszy);
        friends.set(1, "Maria");
        System.out.printf("\n%s\n", friends.get(1));
        for (int i = 0; i < friends.size(); i++) {
            System.out.println(friends.get(i));
        }
        //Rozdział 1.8.4
        System.out.println("\nRozdział 1.8.4");
        ArrayList<Integer> numbers = new ArrayList<>();
        numbers.add(42);
        System.out.println(numbers.get(0));
        int[] loop = {1, 3, 5, 8, 12, 5, 18};
        int sum = 0;
        for (int i = 0; i < loop.length; i++) {
            sum += loop[i];
        }
        System.out.println("Suma wynosi: " + sum);
        sum = 0;
        for (int a : loop) {                                                                                            //Pętla rozszerzona
            sum += a;
        }
        System.out.println("Suma wynosi: " + sum);
        for (String na : friends) {
            System.out.println(na);
        }
        int[] primes = {2, 3, 5, 7, 11, 42};
        for (int a : primes) {
            System.out.print(a + ",");
        }
        System.out.println();                                                                                           //Wskazuje na to samo !!!
        int[] numbers1 = primes;
        numbers1[3] = 42;
        for (int a : primes) {
            System.out.print(a + ",");
        }
        System.out.println();
        for (int a : numbers1) {
            System.out.print(a + ",");
        }
        int[] copiedPrimes = Arrays.copyOf(primes, primes.length);                                                       //Kopiuje tablice i juz nie wskazuja na tą samą tablice
        ArrayList<String> people = friends;
        people.set(0, "Maria"); //W tym momencie friends.get(0) rówznież zwróci "Maria"

        ArrayList<String> copiedFriends = new ArrayList<>(friends);
        String[] names2 = {"Maria", "Dawid", "Nikola"};
        ArrayList<String> friends2 = new ArrayList<>(Arrays.asList(names2));

    }
}
