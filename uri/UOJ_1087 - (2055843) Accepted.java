import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		int x1, y1, x2, y2;
		Scanner s = new Scanner(System.in);
		
		do{
			x1 = s.nextInt();
			y1 = s.nextInt();
			x2 = s.nextInt();
			y2 = s.nextInt();
			
			if((x1+x2+y1+y2)!=0){
				if(x1==x2 && y1==y2){
					System.out.println("0");
				}else if((Math.abs(x1-x2) == Math.abs(y1-y2)) || (x1==x2 || y1==y2)){
					System.out.println("1");
				}else{
					System.out.println("2");
				}
			}
		}while(x1>0 && y1>0 && x2>0 && y2>0);	
	}
}