x = "awesome"

def main():
    x = "not awesome"
    print("This is now:", x)

def function():
    global x 
    x = "fantastic"
    print("This is now:", x)

main()
function()

print("Well outside the function is still:", x)