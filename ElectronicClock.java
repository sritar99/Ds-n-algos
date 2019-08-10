//Java Program to create an electronic lock

/*
   Author : Sasank
   CaseStudy : 01
   FileName : Driver.java
   Date : 11/7/2019
   Topic : Java Swing,JFrame
*/

//Importing packages 
import java.awt.event.*;
import javax.swing.*;
import java.util.*;

//Creating ElectronicClock class
class ElectronicLock extends JFrame implements ActionListener{
	int password = 123456;
	JPanel p;
	JButton b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,enter,clear;
	JPasswordField tf;
	JLabel l;
	String s = "";
	public ElectronicLock(){
		//Creating Objects
		p = new JPanel();
		b0 = new JButton("0");
		b1 = new JButton("1");
		b2 = new JButton("2");
		b3 = new JButton("3");
		b4 = new JButton("4");
		b5 = new JButton("5");
		b6 = new JButton("6");
		b7 = new JButton("7");
		b8 = new JButton("8");
		b9 = new JButton("9");
		clear = new JButton("CLEAR");
		enter = new JButton("ENTER");
		tf = new JPasswordField();
		l = new JLabel();

		//Adding listeners
		b0.addActionListener(this);			
		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
		b4.addActionListener(this);
		b5.addActionListener(this);
		b6.addActionListener(this);
		b7.addActionListener(this);
		b8.addActionListener(this);
		b9.addActionListener(this);
		enter.addActionListener(this);
		clear.addActionListener(this);

		//Add it
		p.add(tf);
		p.add(b0);
		p.add(b1);
		p.add(b2);
		p.add(b3);
		p.add(b4);
		p.add(b5);
		p.add(b6);
		p.add(b7);
		p.add(b8);
		p.add(b9);
		p.add(clear);
		p.add(enter);
		p.add(l);
		add(p);

		//Configure it
		setTitle("Electronic Lock");
		setSize(400,400);
		setVisible(true);
		p.setLayout(null);
		tf.setEchoChar('*');
		tf.setHorizontalAlignment(JTextField.RIGHT);
		tf.setBounds(50,20,300,40);
		b1.setBounds(50,60,100,40);
		b2.setBounds(150,60,100,40);
		b3.setBounds(250,60,100,40);
		b4.setBounds(50,100,100,40);
		b5.setBounds(150,100,100,40);
		b6.setBounds(250,100,100,40);
		b7.setBounds(50,140,100,40);
		b8.setBounds(150,140,100,40);
		b9.setBounds(250,140,100,40);
		clear.setBounds(50,180,100,40);
		b0.setBounds(150,180,100,40);
		enter.setBounds(250,180,100,40);
		l.setBounds(50,240,500,40);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	
	public void actionPerformed(ActionEvent e){
		if(e.getSource() == b0)
			s = s+"0";
		if(e.getSource() == b1)
			s = s+"1";
		if(e.getSource() == b2)
			s = s+"2";
		if(e.getSource() == b3)
			s = s+"3";
		if(e.getSource() == b4)
			s = s+"4";
		if(e.getSource() == b5)
			s = s+"5";
		if(e.getSource() == b6)
			s = s+"6";
		if(e.getSource() == b7)
			s = s+"7";
		if(e.getSource() == b8)
			s = s+"8";
		if(e.getSource() == b9)
			s = s+"9";
		if(e.getSource() == clear){
			s = "";
			l.setText("");
		}
		if(e.getSource() == enter)
			lockCheck();
		tf.setText(s);
	}
	public void lockCheck(){
		String s = tf.getText();
		int code = Integer.parseInt(s);
		if(code == password) l.setText("Welcome ur code is correct");
		else l.setText("Your code is not correct");
	}
}

//Creating Driver Class
class Driver{
	public static void main(String args[]){
		ElectronicLock el = new ElectronicLock();
	}
}