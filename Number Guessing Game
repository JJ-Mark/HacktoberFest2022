import random as r

def check_result(up,cp,name):
    if(up == cp):
        print("Tie! You and computer have same points")
    elif(up > cp):
        print(name," is a winner!")
    elif(cp > up):
        print("computer is a winner!")

while(True):
    name = input("Enter your name: ")
    rounds = int(input("How many rounds do you want to play?"))


    terminated = 0
    up,cp = 0,0
    for i in range(rounds):
        ugn = int(input("Choose a number between 1 and 6(press 0 for Terminate): "))
        cgn = r.randint(1, 6)
        print("Computer choosed ",cgn)

        if(ugn == 0):
            print("Terminated..")
            check_result(up, cp, name)
            terminated = 1
            break

        if(ugn > cgn):
            up += 1
        elif(ugn < cgn):
            cp += 1
        elif(ugn == cgn):
            up += 1
            cp += 1
        print(name ,": ",up," points\tComputer: ",cp," points","\n")


    if(terminated == 0):
        check_result(up, cp, name)
        print(name ,": ",up," points\tComputer: ",cp," points","\n")

    check = int(input("Do you want to Play Again?(1 for yes/0 for no) "))
    if(check == 1):
        pass
    elif(check == 0):
        break
