"""
x = 5
y = 7.5
z = 10
print(x,y, sep = 'q', end = '')
print(z)
print(x + y + z)
a = 'boo'
idk = a * 3
print (idk)


    #can do abc + abc
    #cant do abc - abc
    
    #cant do division
    #something.strip() return the string it call on
    
value = int(input('Enter: '))
if value > 0:
    print('positive num')
else:
    print('negative num')
    
print('bye')

# while loop

num = int(input('Another one: '))
while num > 0:
    print(num)
    num -=1
    # or num = num - 1

# break statement
while True:
    name = input('Enter name: ')
    if name == '':
        print('bro redo it you type nothing ')
    else:
        break
    
print('Your name is ' + name)


# another alternative
name = ''

while name == '':
    name = input('name pls: ')
    
    if name == '':
        print('bro redo it you type nothing ')
print('Your name is ' + name)

# else to a while loop
total = 0
count = 0

print('enter 10 non-zero num')

while count < 10:
    num = 3
    
    if num == 0:
        print('You typed 0 so sum = 0')
        break
    else:
        total = total + num
        count = count + 1
else:
    print('Total sum ', total)
"""
for i in range(3):
    print(f"Loop count: {i}")

r = range(1,10)
index = 10
total = 10

while index < len(r):
    total = total + r[index]
    index = index + 1
print("Sum is ", total)

for i in range(1, 10):
    print(f"Loop count: {i}")