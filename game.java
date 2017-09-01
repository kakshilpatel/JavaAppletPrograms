import java.util.*;

class game{
Scanner s=new Scanner(System.in);

String value[]=new String[9];


void valuess(){
for(int i=1; i<10; i++){
value[i-1]=Integer.toString(i);
}
}

void display()
{
for(int i=1; i<10; i++){
System.out.print("\t");
System.out.print(value[i-1] + "|");
if(i%3==0){
System.out.println();
}
}
}
String x,o;

void select1(){
System.out.println("\n \tFirst player is x and second player is o \n Player one: Please select(1-9) where you want to place x:");
x=s.next();
if(value[Integer.parseInt(x)-1].equals("O") || value[Integer.parseInt(x)-1].equals("X"))
{System.out.println("\n \n Please select other number");
select1();}
else
{
value[Integer.parseInt(x)-1]="X";}

}

void select2(){

System.out.println("\n \tPlayer two: Please select(1-9) where you want to place o:");
o=s.next();

if(value[Integer.parseInt(o)-1].equals("O") || value[Integer.parseInt(o)-1].equals("X"))
{System.out.println("\n \tPlease select other number");
select2();}
else
{
value[Integer.parseInt(o)-1]="O";}
}

void condition(){
if(value[0].equals("X") && value[1].equals("X") && value[2].equals("X"))
{System.out.println("Player 1 wins");
System.exit(0);
}  

else if(value[3].equals("X") && value[4].equals("X") && value[5].equals("X"))
{System.out.println("Player 1 wins");
System.exit(0);}  

else if(value[6].equals("X") && value[7].equals("X") && value[8].equals("X"))
{System.out.println("Player 1 wins");
System.exit(0);} 

else if(value[0].equals("X") && value[3].equals("X") && value[6].equals("X"))
{System.out.println("Player 1 wins");
System.exit(0);}

else if(value[1].equals("X") && value[4].equals("X") && value[7].equals("X"))
{System.out.println("Player 1 wins");
System.exit(0);}

else if(value[2].equals("X") && value[5].equals("X") && value[8].equals("X"))
{System.out.println("Player 1 wins");
System.exit(0);}

else if(value[0].equals("X") && value[4].equals("X") && value[8].equals("X"))
{System.out.println("Player 1 wins");
System.exit(0);}

else if(value[2].equals("X") && value[4].equals("X") && value[6].equals("X"))
{System.out.println("Player 1 wins");
System.exit(0);}

else if(value[0].equals("O") && value[1].equals("O") && value[2].equals("O"))
{System.out.println("Player 2 wins");
System.exit(0);}  

else if(value[3].equals("O") && value[4].equals("O") && value[5].equals("O"))
{System.out.println("Player 2 wins");
System.exit(0);}  

else if(value[6].equals("O") && value[7].equals("O") && value[8].equals("O"))
{System.out.println("Player 2 wins");
System.exit(0);} 

else if(value[0].equals("O") && value[3].equals("O") && value[6].equals("O"))
{System.out.println("Player 2 wins");
System.exit(0);}

else if(value[1].equals("O") && value[4].equals("O") && value[7].equals("O"))
{System.out.println("Player 2 wins");
System.exit(0);}

else if(value[2].equals("O") && value[5].equals("O") && value[8].equals("O"))
{System.out.println("Player 2 wins");
System.exit(0);}

else if(value[0].equals("O") && value[4].equals("O") && value[8].equals("O"))
{System.out.println("Player 2 wins");
System.exit(0);}

else if(value[2].equals("O") && value[4].equals("O") && value[6].equals("O"))
{System.out.println("Player 2 wins");
System.exit(0);}
}

void draw(){
for(int i=0; i<9; i++)
{
if(value[i].equals("X") || value[i].equals("O"))
{
System.out.println("Draw"); System.exit(0);
}

}
}

}

class gamemain{
public static void main(String args[]){
game g=new game();
g.valuess();
for(int i=0; i<4; i++){
g.condition();
g.display();
System.out.println();
g.select1();
System.out.println();
g.display();
System.out.println();
g.condition();
if(i<4){
g.select2();
System.out.println();
g.display();
System.out.println();}


}
g.draw();}

}