class Outer {
    private class Inner {
        public void displayPrivateInheritance() {
            System.out.println("Private Inheritance");
        }
    }

    public void callPrivateInheritance() {
        Inner inner = new Inner();
        inner.displayPrivateInheritance();
    }
}
class Superclass {
    public void displayPublicInheritance() {
        System.out.println("Public Inheritance");
    }

    protected void displayProtectedInheritance() {
        System.out.println("Protected Inheritance");
    }
}
class Subclass extends Superclass {
    public void callProtectedInheritance() {
        displayProtectedInheritance();
    }
}
public class Main {
    public static void main(String[] args) {
        Outer outer = new Outer();
        outer.callPrivateInheritance(); 
        Subclass subclass = new Subclass();
        subclass.displayPublicInheritance(); 

        subclass.callProtectedInheritance(); 
    }
}
