# include<iostream.h>
# include<conio.h>
class distance
{
	private:
		int inch,feet;
	public:
		void getdata(int inch);
		void printdata();
		void add(int a);
		void add(distance d1);
		distance Add(distance d1,distance d2);
};
void distance::getdata(int inch)
{
	this->feet=inch/12;
	this->inch=inch%12;
}
void distance::add(int a)
{
	inch=inch+a;
	this->feet=inch/12;
	this->inch=inch%12;
}
void distance::add(distance d1)
{
	inch=inch+d1.inch;
	feet=d1.inch+inch/12;
	inch=d1.inch+inch%12;
}
distance distance::Add(distance d1,distance d2)
{
	distance temp;
	temp.inch=d1.inch+d2.inch;
	temp.feet=d1.feet+d2.feet+temp.inch/12;
	temp.inch=temp.inch%12;
	return temp;
}
void distance::printdata()
{
	cout<<"\n";
	cout<<"\n Feet is:-->"<<feet;
	cout<<"\n Inch is:-->"<<inch;
}
void main()
{
	distance d1,d2,d3;
	clrscr();
	d1.getdata(75);
	d1.printdata();
	d1.add(5);
	d1.printdata();
	d2.getdata(50);
	d1.printdata();
	d2.printdata();
	d1.add(d2);
	d2.printdata();
	d1.printdata();
	d3=d1.Add(d1,d2);
	d1.printdata();
	d2.printdata();
	d3.printdata();
	getch();
}



