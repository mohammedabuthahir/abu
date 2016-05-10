import java.util.Scanner;
class Positive
{
	public static void main(String args[])
	{
		Scanner br = new Scanner(System.in);
		System.out.println("Ente the Number");
		int i=br.nextInt();
		if(i>0)
		{
			System.out.println("its a positive number");
		}
		else if(i<0)
		{
			System.out.println("its a negative number");
		}
		else
		{
			System.out.println("its a zero");
		}
		
	}	
}