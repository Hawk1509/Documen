//prorgam to illustrate the use of "This" keyword
class stud
{
    int roll;
    String name;
    float fee;
    stud(int roll, String name, float fee)
    {
        this.roll = roll;
        this.name = name;
        this.fee = fee; 
    }
    void display()
    {
        System.out.println(+roll+"\t"+name+"\t"+fee+"\n");
    }
}
public class thsKwrd 
{
    public static void main(String[] args)
    {
        stud ob = new stud(1,"Phillip",20093f);
        stud ob1 = new stud(2,"Abel",200191f);
        System.out.println("\nSTUDENT DETAILS \n");
        ob.display();
        ob1.display();
    }
}
/*
STUDENT DETAILS 

1       Phillip 20093.0

2       Abel    200191.0

 */