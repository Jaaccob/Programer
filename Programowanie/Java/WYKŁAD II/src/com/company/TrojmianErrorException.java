package com.company;

public class TrojmianErrorException extends Exception {
    public TrojmianErrorException() {
        super("Współczynnik przy kwadracie równy zero");
    }
}
