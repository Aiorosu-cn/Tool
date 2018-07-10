package com.ai.nar_number;

public class Nar {
	

	
	public static void main(String[] args) {

		for(int i = 1 ;  i <=100000; i++){
			if(Tool.isNar(i)){
				System.out.println(i);
			}
		}
		
		
	}

}
