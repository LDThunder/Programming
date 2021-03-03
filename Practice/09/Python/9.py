print("Vremya pervogo")
h = int(input())
m = int(input())
print("Vremya vtorogo")
H = int(input())
M = int(input())
MI = M + 15

if ((h <= 0)&(H < 24)):
    print("Pravilno")
else:
    print("Chasi ne sovpadaut");
if ((m <= 0)&(M < 60)):
    print("Vse escho pravilno")
else:
     print("Minuti ne sovpadaut");
if ((h == H)&(m <= MI)):
    print("Sostoica")
else:
    print("Ne sostoica");
