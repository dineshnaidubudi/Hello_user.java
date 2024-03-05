class Vehicle {
    protected String brand;
    protected int year;

    public Vehicle(String brand, int year) {
        this.brand = brand;
        this.year = year;
    }

    public void displayInfo() {
        System.out.println("Brand: " + brand);
        System.out.println("Year: " + year);
    }
}

class Car extends Vehicle {
    protected int numDoors; // Change private to protected

    public Car(String brand, int year, int numDoors) {
        super(brand, year);
        this.numDoors = numDoors;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Number of doors: " + numDoors);
    }
}

class Bike extends Vehicle {
    private String type;

    public Bike(String brand, int year, String type) {
        super(brand, year);
        this.type = type;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Type: " + type);
    }
}

public class Main {
    public static void main(String[] args) {
        Car myCar = new Car("Toyota", 2022, 4);
        Bike myBike = new Bike("Honda", 2020, "Mountain");

        System.out.println("Car Information:");
        myCar.displayInfo();

        System.out.println("\nBike Information:");
        myBike.displayInfo();
    }
}
