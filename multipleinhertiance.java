interface A {
    default void show() {
        System.out.println("A");
    }
}

interface B extends A {
    default void show() {
        System.out.println("B");
    }
}

interface C extends A {
    default void show() {
        System.out.println("C");
    }
}

class D implements B, C {
    public void show() {
        B.super.show(); // Explicitly call B's show() method
    }
}

public class Main {
    public static void main(String[] args) {
        D d = new D();
        d.show();
    }
}
