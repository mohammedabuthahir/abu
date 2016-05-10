import java.util.Scanner;
class Odd
{
	public static void main(String args[])
	{
		Scanner br = new Scanner(System.in);
		System.out.println("Ente the Number");
		int i=br.nextInt();
		if(i%2==0)
		{
			System.out.println("its an even number");
		}
		else
		{
			System.out.println("its a odd number");
		}
		
	}	
}
