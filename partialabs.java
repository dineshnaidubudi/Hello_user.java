abstract class Shape
{
    abstract float area();
    void display()
    {
        System.out.println("This is a shape");
    }
}

class Rectangle extends Shape
{
    float a,b;
    Rectangle(float base,float height)
    {
        a=base;
        b=height;
    }
    public float area()
    {
        return a*b;
    }
}

class Triangle extends Shape
{
    float a,b;
    Triangle(float base,float height)
    {
        a=base;
        b=height;
    }
    public float area()
    {
        return (float)0.50*a*b;
    }
}
public class PartialAbstraction
{
    public static void main(String[] args) 
    {
        Rectangle obj=new Rectangle(28,35);
        Triangle obj1=new Triangle(28,35);
        System.out.println("Area of Rectangle : "+obj.area());
        System.out.println("Area of Triangle : "+obj1.area());
    }
}
