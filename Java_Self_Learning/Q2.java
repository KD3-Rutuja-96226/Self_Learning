import java.util.Scanner;

//import org.w3c.dom.css.Rect;

//Create a Shape hierarchy (Shape → 2DShape/3DShape →Circle/Rectangle/Sphere/Cube) with area and volume calculations

abstract class Shape{
    abstract double area();
}

abstract class TwoDShape extends Shape{

}

abstract class ThreeDShape extends Shape{
    abstract double volume();
}

class Circle extends TwoDShape{
    double radius;

    Circle(double radius){
        this.radius=radius;
    }

    double area(){
        return Math.PI*radius*radius;
    }
}

class Rectangle extends TwoDShape{
    double length, width;

    Rectangle(double length, double width){
        this.length=length;
        this.width=width;
    }

    double area(){
        return length* width;
    }
}

class Sphere extends ThreeDShape{
    double radius;

    Sphere (double radius){
        this.radius=radius;
    }

    double area(){

        return 4*Math.PI*radius*radius;
    }
    double volume(){
        return (4/3)*Math.PI*radius*radius*radius;
    }
}

class Cube extends ThreeDShape{
    double side;

    Cube (double side){
        this.side=side;
    }

    double area(){
        return 6*side*side;

    }

    double volume(){
        return side*side*side;
    }
}


public class Q2 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter Radius: ");
        double r=sc.nextDouble();
        TwoDShape circle=new Circle(r);

        System.out.println("Enter length and width: ");
        double length=sc.nextDouble();
        double width=sc.nextDouble();
        TwoDShape rectangle=new Rectangle(length, width);

        ThreeDShape sphere=new Sphere(r);

        System.out.println("Enter Side: ");
        double side= sc.nextDouble();

        ThreeDShape cube=new Cube(side);

        System.out.println("Area of Circle: "+circle.area());
        System.out.println("Area of Rectangle: "+rectangle.area());

        System.out.println("Area of sphere: "+sphere.area());
        System.out.println("Volume of Sphere is: "+sphere.volume());

        System.out.println("Area of Cube: "+cube.area());
        System.out.println("Volume of Cube is: "+cube.volume());


    }
    
}
