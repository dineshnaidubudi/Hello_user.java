class Animal {
    public void eat() {
        System.out.println("Animal eats");
    }
}
class Dog extends Animal {
    public void bark() {
        System.out.println("Dog barks");
    }
}
interface Herbivore {
    void eatPlants();
}
interface Carnivore {
    void eatMeat();
}
class Lion implements Herbivore, Carnivore {
    public void eatPlants() {
        System.out.println("Lion eats plants");
    }
    public void eatMeat() {
        System.out.println("Lion eats meat");
    }
}
class BabyDog extends Dog {
    public void cry() {
        System.out.println("BabyDog cries");
    }
}
class Cat extends Animal {
    public void meow() {
        System.out.println("Cat meows");
    }
}
public class Main {
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.eat();
        dog.bark();
        Lion lion = new Lion();
        lion.eatPlants();
        lion.eatMeat();
        BabyDog babyDog = new BabyDog();
        babyDog.eat();
        babyDog.bark();
        babyDog.cry();
        Cat cat = new Cat();
        cat.eat();
        cat.meow();
    }
}
