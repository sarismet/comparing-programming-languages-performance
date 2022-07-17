from math import sqrt

def isPrime(number: int) -> bool:
    if number == 2:

        return True;
    
    elif (number <= 1 or (number > 2 and number % 2 == 0)):
    
        return False;
    
    else:
        upper_limit : int = int(sqrt(float(number)));
        index : int = 3

        while (index < upper_limit):
        
            if (number % index == 0):
            
                return False;    

            index += 2;
        
        return True

_range : int = 100000001
max_prime_number : int = 0

for number in range(_range):
    

    if isPrime(number):
        max_prime_number = number

print("Max prime number is :", max_prime_number)