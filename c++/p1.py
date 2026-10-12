# given list -> [4, 8, 2, 9]

li = [4,8,2,9]

# 1) Print every element

def print_list(li):
    for l in li:
        print(l)
    print("------------------------------------")

# 2) Calculate the sum

def calculate_sum(li):
    sum = 0
    for i in li:
        sum = sum + i
    print(sum)
    print("------------------------------------")

# 3) Find the maximum

def maximum(li):
    max = 0

    for i in li:
        if max < i:
            max = i
    print(max)
    print("------------------------------------")

# 4) Count even numbers

def even_no(li):
    even = 0
    for i in li:
        if i % 2 == 0:
            even = even + 1
    print(even)
    print("------------------------------------")






print_list(li)
calculate_sum(li)
maximum(li)
even_no(li)
    
