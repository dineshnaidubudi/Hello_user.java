class ThreadA implements Runnable{
    String name;
    ThreadA(String name){
        this.name=name;
    }
    public void run(){
        System.out.println("hello "+name);
    }
}
class Main{
    public static void main(String[] args){
        Thread x = new Thread(new ThreadA("Dinesh"));
        ThreadA y = new ThreadA("Yaswanth");
        y.run();
        x.start();
    }
}
