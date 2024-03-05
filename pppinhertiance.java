class Public {
    public
    int publicVar = 1;

    private
    int privateVar = 2;

    protected
    int protectedVar = 3;

    public
    int getPrivate() {
        return privateVar;
    }
}

public class InheritanceAccess {
    public static void main(String[] args) {
        Public pub = new Public();
        System.out.print("Public : " + pub.publicVar + "\n");
        //System.out.print("Public : "+pub.privateVar);
        //We cannot access the privateVar because it is private i.e, accessible only within the class.
        System.out.print("Private : " + pub.getPrivate() + "\n");
        System.out.print("Protected : " + pub.protectedVar + "\n");
    }
}
