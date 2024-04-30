import java.util.HashMap;
import java.util.Map;

public class Main{
	public static void main(String[] args) {
		Map <String,Integer> x = new HashMap<>();
		x.put("Dinesh",24);
		x.put("Yaswanth",02);
		x.put("tarun",12);
		x.put("madhu",63);

		System.out.println(x.keySet());
		System.out.println(x.values());
		System.out.println(x);
		for(String key : x.keySet()){
			System.out.println(key+" : "+x.get(key));
		}
	}
}
