package java16;

import static java.lang.Math.sqrt;

public class Main {
    public static void main(String[] args) {
        final int range = 100000000;
        int maxPrimeNumber = 0;

        for (int number = 0; number <= range; number++) {
            if (isPrime(number)) {
                maxPrimeNumber = number;
            }
        }

        System.out.println("Max prime number is : " + maxPrimeNumber);
    }

    public static boolean isPrime(final int number) {
        if (number == 2) {
            return true;
        } else if (number <= 1 || (number > 2 && number % 2 == 0)) {
            return false;
        } else {
            int upperLimit = (int) sqrt(Double.valueOf(number));
            int index = 3;

            while (index < upperLimit) {

                if (number % index == 0) {
                    return false;
                }

                index += 2;
            }

            return true;
        }

    }
}