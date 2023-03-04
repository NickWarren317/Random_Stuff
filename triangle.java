import java.util.Scanner;
import java.util.random.*;

class triangle{
    public static void main(String args[]){
        while(true){
            Scanner input = new Scanner(System.in);
            System.out.println("Please enter 1 for full or 2 for partial triangle");
            int selection = input.nextInt();
            int rows = 10;

            if(selection < 0 || selection > 2){
             System.out.println("INVALID!");
            } else if (selection == 1){
                for(int i = 0; i < rows; i++){
                    for(int j = 0; j < i; j++){
                        System.out.print("0 ");
                    }
                    System.out.println("");
                }
            } else {
                for(int i = 0; i < rows; i++){
                    for(int j = 0; j < i; j++){
                        if(Math.random() > 0.5){
                            System.out.print("0 ");
                        } else {
                            System.out.print("  ");
                        }
                    }
                    System.out.println("");
                }
            }
        }
    }
}