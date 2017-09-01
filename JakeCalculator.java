import java.awt.*;
import java.awt.event.*;

class JakeCalculator extends Frame implements ActionListener{

TextField t1,t2,tsum;
Label b,b1,b2,b3,b4;
Button c,c1,c2,c3,c4;

public static void main(String [] args)
{
new JakeCalculator("Simple Calculator Version 1.0");
}

public JakeCalculator(String s){
	super(s);
	setLayout(null);
	setSize(400,450);
	setVisible(true);
	setLocation(350,100);
	setBackground(Color.green);

b3 = new Label("*** Simple Calculator Version 1.0 ***");
b3.setBounds(80,40,230,30);
b4 = new Label("Created By: Mr. Jake R. Pomperada, MAED-IT");
b4.setBounds(80,348,250,30);

b = new Label("Enter 1st number");
b.setBounds(30,80,130,30);
b1 = new Label("Enter 2nd number");
b1.setBounds(30,120,130,30);
b2 = new Label("Result");
b2.setBounds(30,160,120,30);
add(b3);add(b);add(b1);add(b2); add(b4);


t1 = new TextField();
t1.setBounds(170,80,120,30);
t2 = new TextField();
t2.setBounds(170,120,120,30);
tsum = new TextField();
tsum.setBounds(170,160,120,30);
add(t1);add(t2);add(tsum);

c = new Button("Add");
c.setBounds(30,220,120,30);
c.addActionListener(this);
add(c);

c1 = new Button("Subtract");
c1.setBounds(170,220,120,30);
c1.addActionListener(this);
add(c1);

c2 = new Button("Multiply");
c2.setBounds(30,300,120,30);
c2.addActionListener(this);
add(c2);

c3 = new Button("Divide");
c3.setBounds(170,300,120,30);
c3.addActionListener(this);
add(c3);


c4 = new Button("Exit");
c4.setBounds(150,400,120,30);
c4.addActionListener(this);
add(c4);
}

public void actionPerformed(ActionEvent e) {

String a1 = t1.getText();

String a2 = t2.getText();

int x = Integer.parseInt(a1);
int y = Integer.parseInt(a2);

int s = x+y;
int s1 = x-y;
int s2 = x*y;
int s3 = x/y;
if(e.getActionCommand().equals("Add")){
tsum.setText(String.valueOf(s));
}

if(e.getActionCommand().equals("Subtract")){
tsum.setText(String.valueOf(s1));
}


if(e.getActionCommand().equals("Multiply")){
tsum.setText(String.valueOf(s2));
}

if(e.getActionCommand().equals("Divide")){
tsum.setText(String.valueOf(s3));
}

if (e.getActionCommand().equals("Exit")){
System.exit(0);
}}}
