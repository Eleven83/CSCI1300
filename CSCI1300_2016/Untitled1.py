def TempConvF(celsius):
    fahrenheit = (celsius-32) * 5/9
    return fahrenheit

def main():
    print "testing Fahrenheit Function"

    temp = TempConvF(25)
    print "c = ", temp
