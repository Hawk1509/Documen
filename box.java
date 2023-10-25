//program to make class box with name box 3 instance avribles one method & connstructor
class box1{
	double width;
	double height;
	double depth;
	box1(double w, double h, double d)
	{
		width = w;
		height = h;
		depth = d;
	}
	double volume()
	{
		return width * height * depth;
	}
}
class box{
	public static void main(String[] args){
		box1 obj = new box1(10,20,30);
		double vol;
		vol = obj.volume();
		System.out.println("The volume is: "+vol);
		}
	}	
