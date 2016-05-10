import java.util.Scanner;

public class Leap_Year 
{
	public static void main(String[] args) 
	{
		Scanner br = new Scanner(System.in);
		System.out.println("Ente the Year");
		int year=br.nextInt();
		if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
		{
			System.out.println("Year " + year + " is a leap year");
		}
        else
        {
        	System.out.println("Year " + year + " is not a leap year");
        }
	}
}
	
	