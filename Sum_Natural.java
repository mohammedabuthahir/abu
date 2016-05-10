import java.util.Scanner;

class Sum_Natural
{
	public static void main(String args[])
	{
		int sum=0;
		Scanner n = new Scanner(System.in);
		System.out.println("Enter the number");
		int c = n.nextInt();
		for(int i=1;i<=c;i++)
		{
			sum+=i;
			
		}
		System.out.println("The sum of natural number is"+sum);
		
		
	}	
}


