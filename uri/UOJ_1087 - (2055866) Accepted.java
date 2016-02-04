import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		int x1, y1, x2, y2;
		Scanner s = new Scanner(System.in);
		
		while((x1 = s.nextInt())>0 && (y1 = s.nextInt())>0 && (x2 = s.nextInt())>0 && (y2 = s.nextInt())>0){			
			if(x1==x2 && y1==y2){
				System.out.println("0");
			}else if((Math.abs(x1-x2) == Math.abs(y1-y2)) || (x1==x2 || y1==y2)){
				System.out.println("1");
			}else{
				System.out.println("2");
			}
		}
	}
}