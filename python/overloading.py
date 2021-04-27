def sum1(a, b):
    if type(a) != type(b):
        return a * b
    else:
        return (a + b)


print(sum1(1, 2))
print(sum1("Hello", " world!"))
print(sum1(10, "Hello"))