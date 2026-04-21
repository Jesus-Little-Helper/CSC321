#Name: Esthepanie Izaguirre
#CSC 321 
#Lab 12



#area of rectangle
def area_rectangle(base, height):
    x = base * height
    return x

#circle area
def area_circle(radius):
    y = 3.1416 * radius * radius
    return y

print("*********** Area Computations ***********\n")

#rectangle
base = float(input("Enter base of Rectangle: "))
height =  float(input("Enter height of rectangle: "))

area = area_rectangle(base,height)
print(f"The area of the Rectangle is:{area}\n")

#circle
radius = float(input("Enter radius of Circle: "))

cir_area = area_circle(radius)
print(f"The area of the Circle is: {cir_area}")

