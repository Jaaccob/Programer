import org.junit.Assert;
import org.junit.Test;


public class TriangleTest {

    @Test
    public void shouldBeATriangle() {
        Triangle triangle;
        Point pointFirst = new Point(0, 0);
        Point pointSecond = new Point(10, 10);
        Point pointThird = new Point(5, 5);
        triangle = new Triangle(
                pointFirst,
                pointSecond,
                pointThird
        );
        System.out.println("Pole trójkąta: "+triangle.area(pointFirst,pointSecond,pointThird));
        Assert.assertEquals(triangle.perimeter(), 28.284271f, 0.002);
    }


    @Test
    public void shouldBeTrue() {
        Assert.assertEquals(1, 1);
    }
}