import turtle

myTurtle = turtle.Turtle()
myWin = turtle.Screen()

def draw(myturtle, length):
    if length > 0:
        myTurtle.forward(length)
        myTurtle.left(90)
        draw(myTurtle, length-10)

draw(myTurtle, 100)
myWin.exitonclick()