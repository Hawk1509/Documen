//program to check wether a string is a palindrome
import java.util.*;
class strPali{
	public static void main(String[] args){
	int i = 0,len;
	String s,Rev = "";
	//int s;
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter string: ");
	s = sc.nextLine();
	len = s.length();
	for(i =len-1;i>=0;i--)
	{
		Rev += s.charAt(i);
	}
	if (s.equalsIgnoreCase(Rev))
	{
		System.out.println(s+" is a plaindrome");
	}
	else
	{
		System.out.println(s+" is not a plaindrome");
	}	
	}
}
