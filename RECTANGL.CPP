
  #include<iostream.h>
  #include<conio.h>


  class rectangle
  {

    private:

		int l,b;

    public:
	    void getdata(int l1,int b1)
	    {

	       if(l1<0)
	       {
		  l=0;
	       }

	       else
	       {
		 l=l1;
	       }

	       if(b1<0)
	       {
		  b=0;
	       }

	       else
	       {
		 b=b1;
	       }
	    }

	    int area()
	    {
	       return l*b;
	    }

	    int perimeter()
	    {

	       return 2*(l+b);
	    }

	    void display()
	    {

		cout<<"\n l is"<<l;
		cout<<"\n b is"<<b;
	    }


  };

  void main()
  {
    clrscr();

    rectangle r1;

    //r1.l=-10;

    //r1.b=20;

    r1.getdata(-10,20);

    r1.display();

    cout<<"\n area="<<r1.area();



    cout<<"\n"<<r1.perimeter();



    getch();
  }


