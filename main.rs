fn main() {
    let range = 100000001;
    let mut max_prime_number = 0;

    for number in 1..range {
        if is_prime(number) {
            max_prime_number = number;
        }
    }

    println!("Max prime number is : {}", max_prime_number)
}

pub fn is_prime(number: i32) -> bool {
    if number == 2 {
        return true;
    } else if number <= 1 || (number > 2 && number % 2 == 0) {
        return false;
    } else {
        let upper_limit = (number as f64).sqrt() as i32;
        let mut index = 3;

        while index < upper_limit {
            if number % index == 0 {
                return false;
            }

            index += 2;
        }

        return true;
    }
}
