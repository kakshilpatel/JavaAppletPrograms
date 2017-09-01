import java.applet.*;
import java.awt.event.*;
import java.awt.*;

public class calculator extends Applet implements ActionListener{
TextField text1,text2,text3,text4;
Label l1,l2,l3,l4;
Label lab;
Panel p;
String Add, Subtract,Multiply,Divide,Clear,Exit;
public void init(){

text1 = new TextField(12);
text2= new TextField(12);
text3 = new TextField(12);
text4 = new TextField(12);
l1=new Label("Enter Number 1:");
l2=new Label("Enter Number 2:");
l3=new Label("Enter Number 3:");
l4=new Label("Enter Number 4:");
lab=new Label();
p=new Panel(new GridLayout(1,3));
Panel p1=new Panel(new GridLayout(7,2));
Panel p2=new Panel(new GridLayout(1,1));
Button add = new Button("Add");
Button sub = new Button("Subtract");
Button mul = new Button("Multiply");
Button div = new Button("Divide");
Button clear = new Button("Clear");
Button exit = new Button("Exit");
add.addActionListener(this);
sub.addActionListener(this);
mul.addActionListener(this);
div.addActionListener(this);
clear.addActionListener(this);
exit.addActionListener(this);
p1.add(l1);
p1.add(text1);
p1.add(l2);
p1.add(text2);
p1.add(l3);
p1.add(text3);
p1.add(l4);
p1.add(text4);
p1.add(add);
p1.add(sub);
p1.add(mul);
p1.add(div);
p1.add(clear);
p1.add(exit);
p2.add(lab);
p.add(p1);
p.add(p2);
add(p);
}
public void actionPerformed(ActionEvent e){
String value1=text1.getText();
int num1=Integer.parseInt(value1);
String value2=text2.getText();
int num2=Integer.parseInt(value2);
String value3=text3.getText();
int num3=Integer.parseInt(value3);
String value4=text4.getText();
int num4=Integer.parseInt(value4);
Button source = (Button)e.getSource();
if(source.getLabel() == "Add"){
int cal=num1+num2+num3+num4;
lab.setText("Addition of four numbers is: "+cal);
}
if(source.getLabel() == "Subtract"){
int cal=num1-num2-num3-num4;
lab.setText("Subtraction of four numbers is: "+cal);
}
if(source.getLabel() == "Multiply"){
int cal=num1*num2*num3*num4;
lab.setText("Multiplication of four numbers is: "+cal);
}
if(source.getLabel() == "Divide"){
int cal=num1/num2;
lab.setText("Division of two numbers is: "+cal);
}
if(source.getLabel() == "Clear"){
text1.setText("");
text2.setText("");
text3.setText("");
text4.setText("");

}
if(source.getLabel() == "Exit"){
}
}
}
