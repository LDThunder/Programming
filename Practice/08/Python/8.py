a = int(input());
b = int(input());
s = str(input());
def addition(a, b):
  u = a + b; 
  return u
def subtraction(a, b):
  m = a - b;
  return m
def mul(a, b):
  d = a * b;
  return d
def division(a, b):
  t = a / b;
  return t
def default(a, b):
  return "Neverniy vvod"
switcher = {
    1: addition,
    2: subtraction,
    3: mul,
    4: division
}
def switch(s, a, b):
  return switcher.get(s, default)(a, b)
print('''Сalculation
1. Pribavka
2. Otbavka
3. Umnozhenie
4. Delenie ''')
def switch(operation):
    return switcher.get(s, default) 
print(switch(s)(a, b)) 