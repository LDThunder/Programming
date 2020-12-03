weight, height = map(float, input("Вес и рост:").split())
bmi = (abs(weight) / ((abs(height) / 100) ** 2))
if bmi < 18.5:
    print("Underweight")
elif 18.5 <= bmi < 25.0:
    print("Normal")
elif 25.0 <= bmi < 30.0:
    print("Overweight")
elif 30.0 <= bmi:
    print("Obesity")

