// 2.2 Write a program to prompt a user for their name and then welcome them. 

import java.io.*;

public class Raw_input {
	
	public static void main(String[] args) throws IOException {
		System.out.print("Enter your name: ");
		InputStreamReader inp = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(inp);
		String name = br.readLine();
		System.out.println("Hello "+name);
	}
}