//program to count the number of vowels, digits, consonants, white spaces, special character
import java.util.*;
class strcount{
	public static void main(String[] args)
	{
		int vow = 0, dig = 0, conso = 0, ws = 0, sch = 0;
		int i = 0,len;
		char b;
		String s;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a string: ");
		s = sc.nextLine();
		len = s.length();
		s = s.toLowerCase();
		for (i=0;i<len;i++)
		{
			b = s.charAt(i);
			if (b == 'a' || b == 'e' || b == 'i' || b == 'u' || b == 'o')
			{
				vow += 1;
			}
			else if (b >= '1' && b <= '9')
			{
				dig += 1;
			}
			else if (b >= 'a' && b <= 'z')
			{
				conso += 1;
			}
			else if (b == ' ')
			{
				ws += 1;
			}
			else
			{
				sch += 1;
			}
		}
		System.out.println("Number of Vowels = "+vow);
		System.out.println("Number of Digits = "+dig);
		System.out.println("Number of Consonants = "+conso);
		System.out.println("Number of White Spaces = "+ws);
		System.out.println("Number of Special Characters = "+sch);
		}
	}
			
				
		
		
