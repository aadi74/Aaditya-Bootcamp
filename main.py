def fibonacci(n):
    if n <= 0:
        return []
    elif n == 1:
        return [0]
    
    fib = [0, 1]
    for _ in range(2, n):
        fib.append(fib[-1] + fib[-2])
# Error
# FIXME

n = int(input("Enter number of terms: "))
print(fibonacci(n))
