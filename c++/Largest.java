public class Largest
{

    public static void main(String[] args)
    {
        double[] numArray={22.3,-34.5,34.5,54.5,45.3,534.4,54.5,-54.54};
        double largest=numArray[0];

        for(double num:numArray){
            if(largest < num)
                largest=num;
        }
        System.out.format("Largest element =%.2f",largest);
    }
}