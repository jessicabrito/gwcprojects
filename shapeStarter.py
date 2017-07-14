from turtle import *
import math

fillcolor('blanched almond')
# Name your Turtle.
t = Turtle()

side = input("What is your side? ")
print ('Your side is:', side)
type(side)

# Number of sides
speed(1)
# Angle of shape
angle = (180-(180*(int(side)-2))/int(side))

begin_fill()
# Set Up your screen and starting position.
penup()
pencolor('blanched almond')
setup(700,700)

### Write your code below:

pendown()

while int(side) > 0:

    forward(50)
    left(angle)
    side = int(side) -1

end_fill()
# Close window on click.
exitonclick()
