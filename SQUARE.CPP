
  #include<iostream.h>
  #include<conio.h>


  class Square
  {

    private:

    public:
	    int length;

	    int area()
	    {
	       return length*length;
	    }


  };

  void main()
  {
    clrscr();

    Square s1,s2;

    s1.length=10;

    cout<<s1.area();

    s2.length=20;

    cout<<"\n"<<s2.area();

    getch();
  }