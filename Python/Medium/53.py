def calculate_average(lst):
 total = 0
 for num in lst:
    total += num
 return total / len(lst)
 
def main():
 numbers = [1,2,3]
 try:
    avg = calculate_average(numbers)
    print(f"Average: {avg}")
 except ZeroDivisionError as e:
    print(f"ZeroDivisionError: {e}")
 
main()