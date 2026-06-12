def divide_numbers(a: int, b: int) -> None:
    try:
        # code that might cause an error
        result = a / b
        print(result)
    except:
        print("An error occurred!")


divide_numbers(10, 2)
divide_numbers(8, 2)