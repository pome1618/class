import java.util.Scanner;

public class Test{
	public static void main(String[] args){
		Scanner stdIn = new Scanner(System.in);
		char c;
		String str;
		while(stdIn.hasNext()){
			str=stdIn.next();
			for(int i=0;i<str.length();i++){
//				System.out.print(str.charAt(i));
				c=str.charAt(i);
				if(c=='□'){
					System.out.print("0");
				}else if(c=='■'){
					System.out.print("1");
				}else{
					continue;
				}
				System.out.print(",");
			}
		}
	}
}

