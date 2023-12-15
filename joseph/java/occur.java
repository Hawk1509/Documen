//program to count the number of occurence of each character
import java.util.*;
class occur
{
	public static void main(String[] args)
	{
		int i = 0,count = 0,len;
		String s;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter string: ");
		s = sc.next();
		len = s.length();	
		System.out.println("Enter character whose occurence is to checked: ");
		char c = sc.next().charAt(0);
		for (i=0;i<len;i++)
		{
			if (s.charAt(i) == c)
			count += 1;
		}
		System.out.println(c+" occurs "+count+" times");
	}
}
