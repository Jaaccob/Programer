package com.company;

import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.URL;

public class Main4 {
    public static void main(String[] args) throws IOException {

        URL url = new URL("http://stpiczynski.umcs.lublin.pl/ja02.jpg");
        FileOutputStream out = new FileOutputStream("kopia2.jpg");

        InputStream in = url.openStream();
        long ileBajtow = 0;
        byte [] bufor = new byte[8192];
        int ile;

        while ((ile=in.read(bufor))!=-1){
            out.write(bufor,0,ile);
            ileBajtow+=ile;
            System.out.println("# "+ile);
        }


        in.close();
        out.close();
        System.out.println("Przekopiowane " + ileBajtow);


        //brak dobrej obsługi błędów !!!11!!!!1
    }
}
