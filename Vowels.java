import java.util.Scanner;


public class Vowels 
	{
		public static void main(String args[])
		{
			Scanner br = new Scanner(System.in);
			System.out.println("Ente the character");
			char i= br.next().charAt(0);
			if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u')
			{
				System.out.println("its a vowel");
			}
			else
			{
				System.out.println("its a constant");
			}
			
		}	
	}