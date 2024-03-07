import java.util.Scanner;
public class Accessspecifierdemo {
    public
    int pubVar;
    protected
    int proVar;
    private
    int priVar;
    public
    void setVar(int priValue,int proValue, int pubValue){
        priVar=priValue;
        proVar=proValue;
        pubVar=pubValue;
    }
    void getVar(){
        System.out.println("private variable : " + priVar);
        System.out.println("protected variable : " + proVar);
        System.out.println("public variable : " +pubVar);
    }
}
class test{
    public static void main(String[] args) {
        Accessspecifierdemo obj = new Accessspecifierdemo();
        System.out.println("before set variable");
        obj.getVar();
        int a,b,c;
        Scanner x = new Scanner(System.in);
        System.out.print("enter private varible value : ");
        a= x.nextInt();
        System.out.print("enter protected varible value : ");
        b= x.nextInt();
        System.out.print("enter public varible value : ");
        c= x.nextInt();
        System.out.println("after set variable");
        obj.setVar(a,b,c);
        obj.getVar();
    }
}
