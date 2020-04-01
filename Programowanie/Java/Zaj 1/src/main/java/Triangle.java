public class Triangle {
    //Zadanie 6
    private Point pointFirst;
    private Point pointSecond;
    private Point pointThird;

    public Triangle(Point pointFirst, Point pointSecond, Point pointThird) {
        this.pointFirst = pointFirst;
        this.pointSecond = pointSecond;
        this.pointThird = pointThird;
    }

    public float perimeter() {
        return (float) (pointFirst.distance(pointSecond) + pointSecond.distance(pointThird) + pointThird.distance(pointFirst));
    }

    public static float perimeter(Point pointFirst, Point pointSecond, Point pointThird) {
        return (float) (pointFirst.distance(pointSecond) + pointSecond.distance(pointThird) + pointThird.distance(pointFirst));
    }
    public float area(Point pointFirst, Point pointSecond, Point pointThird){
        float p = perimeter(pointFirst,pointSecond,pointThird)/2;
        return (float) (Math.sqrt(p*(p-pointFirst.distance(pointSecond))*(p-pointSecond.distance(pointThird))*(p-pointThird.distance(pointFirst))));
    }
    //Zadanie 6
}
