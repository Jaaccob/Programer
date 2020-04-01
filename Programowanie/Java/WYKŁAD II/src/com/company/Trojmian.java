package com.company;

public class Trojmian {
    private double a;
    private double b;
    private double c;

    public Trojmian(double a, double b, double c) throws TrojmianErrorException {

        if (a==0){
            throw new TrojmianErrorException();
        }


        this.a = a;
        this.b = b;
        this.c = c;
    }

}
