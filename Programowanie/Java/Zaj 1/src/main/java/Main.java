/*                                                                                                                      Klasa została przeniesiona do oddzielnego pliku
class Point{

    //Zadanie 1
    private float first_area;
    private float second_area;

    public float getFirst_area(){
        return first_area;
    }
    public float getSecond_area(){
        return second_area;
    }

    public void setFirst_area(float first_area){
        this.first_area=first_area;
    }
    public void setSecond_area(float second_area){
        this.second_area=second_area;
    }

    //Zadanie 1
    //Zadanie 2a
    public void move(float x, float y){
        this.first_area+=x;
        this.second_area+=y;
    }
    //Zadanie 2a
    //Zadanie 2b
    public void move(Point punkt){
        this.first_area+=punkt.first_area;
        this.second_area+=punkt.second_area;
    }
    //Zadanie 2b
    //Zadanie 3
    Point(float first_area, float second_area){
        this.first_area=first_area;
        this.second_area=second_area;
    }
    //Zadanie 3
    //Zadanie 4
    public double distance(Point point){
        return Math.sqrt(Math.pow(point.first_area-this.first_area,2)+Math.pow(point.second_area-this.second_area,2));
    }
    //Zadanie 4
}                                                                                                                       Klasa została przeniesiona do oddzielnego pliku
*/
public class Main {

    public static void main(String[] args) {
        //Zadanie 1
    /*
	Point first_point = new Point();
	Point second_point = new Point();
	first_point.setFirst_area(0);
	first_point.setSecond_area(0);
	System.out.println("Ustawienia natwyne: "+first_point.getFirst_area()+" "+first_point.getSecond_area());
	first_point.setFirst_area(4);
	first_point.setSecond_area(2);
	System.out.println("Pierwsza podmiana: "+first_point.getFirst_area()+" "+first_point.getSecond_area());
    //Zadanie 2a
    first_point.move(4,8);
    System.out.println("Metoda move z 2 zmiennymi: "+first_point.getFirst_area()+" "+first_point.getSecond_area());     //Metoda move z klasy Point - dodanie wartości do zmiennych w klasie
    //Zadanie 2b
    second_point.setFirst_area(-2);
    second_point.setSecond_area(-6);
    first_point.move(second_point);
    System.out.println("Metoda move z drugim Punktem: "+first_point.getFirst_area()+" "+first_point.getSecond_area());     //Metoda move z klasy Point - dodanie wartości do zmiennych w klasie
    */
        //Zadanie 3
        Point first_point = new Point(0, 0);
        Point second_point = new Point(4, 2);
        System.out.println("Ustawienia natwyne: " + first_point.getFirst_area() + " " + first_point.getSecond_area());
//Zadanie 4
        System.out.println("Odległość dwóch punktów: " + first_point.distance(second_point));


//Zadanie 5

        Triangle triangle;
        Point pointFirst = new Point(0, 0);
        Point pointSecond = new Point(10, 10);
        Point pointThird = new Point(5, 5);
        triangle = new Triangle(
                pointFirst,
                pointSecond,
                pointThird
        );
        //Zadanie 6
        System.out.println("Pole trójkąta: "+triangle.area(pointFirst,pointSecond,pointThird));
    }
}
