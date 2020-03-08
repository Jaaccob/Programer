package com.company;

public class Triangle{
    //Zadanie 6
    private Point point_first;
    private Point point_second;
    private Point point_thrid;
    public Triangle(Point point_first, Point point_second, Point point_thrid) {
        this.point_first = point_first;
        this.point_second = point_second;
        this.point_thrid = point_thrid;
    }
    public float perimeter(Point point_first, Point point_second, Point point_thrid){
        return (float)(point_first.distance(point_second)+point_second.distance(point_thrid)+point_thrid.distance(point_first));
    }
    //Zadanie 6
}
