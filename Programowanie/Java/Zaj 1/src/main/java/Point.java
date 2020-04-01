class Point {

    //Zadanie 1
    private float first_area;
    private float second_area;

    public float getFirst_area() {
        return first_area;
    }

    public float getSecond_area() {
        return second_area;
    }

    /*
    public void setFirst_area(float first_area){
        this.first_area=first_area;
    }
    public void setSecond_area(float second_area){
        this.second_area=second_area;
    }
     */
    //Zadanie 1
    //Zadanie 2a
    public void move(float x, float y) {
        this.first_area += x;
        this.second_area += y;
    }

    //Zadanie 2a
    //Zadanie 2b
    public void move(Point punkt) {
        this.first_area += punkt.first_area;
        this.second_area += punkt.second_area;
    }

    //Zadanie 2b
    //Zadanie 3
    Point(float first_area, float second_area) {
        this.first_area = first_area;
        this.second_area = second_area;
    }

    //Zadanie 3
    //Zadanie 4
    public double distance(Point point) {
        return Math.sqrt(Math.pow(point.first_area - this.first_area, 2) + Math.pow(point.second_area - this.second_area, 2));
    }
    //Zadanie 4
    //Zadanie 5
    //Przeniesienie klasy do osobnego pliku
    //Zadanie 5

}
