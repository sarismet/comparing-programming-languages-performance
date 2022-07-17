## What is the purpose?

I picked the 5 popular programming language and try to predict their performance by implementing a basic isPrime method in each programming languages.

### C

```bash
  gcc main.c -O3 -o main
  time ./main
```

### Rust

```bash
  rustc -C opt-level=3 main.rs
  time ./main
```

### Golang

```bash
  go build -o main
  time ./main
```

### Java16

```bash
  javac Main.java
  time java java16/Main
```

### Python3

```bash
  python3 main.py
```

# Results

- C: 41.82s
- Golang: 2:30.67
- Rust: 42.314
- Java: 46.36s
- Python3: 1 Hour 33 minute

The best result belongs to C and it is not suprising. Rust has the second seat, which proves the most promising language. What suprises me is how far golang fell behinds compared to others. Once again, python is not designed for the performance concered cases.
