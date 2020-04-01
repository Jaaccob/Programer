package com.company;

import java.io.*;

public class Main3 {
    public static void main(String[] args) throws FileNotFoundException {

        InputStream in = null;
        OutputStream out = null;
        long ileBajtow = 0;


        try {
            in = new FileInputStream("plik.jpg");
            out = new FileOutputStream("kopia.jpg");


            byte [] bufor = new byte[8192];
            int ile;

            while ((ile=in.read(bufor))!=-1){
                out.write(bufor,0,ile);
                ileBajtow+=ile;
                System.out.println("# "+ile);
            }


            /*int b;
            while ((b=in.read())!=-1){
                out.write(b);
                ileBajtow++;
            }*/

        } catch (FileNotFoundException e) {
            System.out.println("Brak pliku "+e.getMessage());
        } catch (IOException e) {
            System.out.println("Wystąpił błąd we/wy "+e.getMessage());
        } catch (Exception e) {
            System.out.println("Wystąpił inny błąd"+e.getMessage());
        } finally {
            if (in != null) {
                try {
                    in.close();
                    System.out.println("Zamknięto plik we");
                }catch (Exception e){
                    System.out.println("błąd "+e.getMessage());
                }
            }
            if (out != null) {
                try {
                    out.close();
                    System.out.println("Zamknięto plik we");
                }catch (Exception e){
                    System.out.println("błąd "+e.getMessage());
                }
            }
            System.out.println("Przekopiowane " + ileBajtow);
        }
    }
}
