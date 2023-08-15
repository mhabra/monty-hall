import random


numDoors = int(input("Enter how many doors you would like to choose from (classic MHP is 3 doors): "))
winningDoors = int(input("How many winning doors would you like to have (classic MHP is 1 door): "))
numTrials = int(input("How many times would you like to run this experiment: "))
switch = input("Would you like to switch doors? ")

if(switch == 'y' or switch == 'yes'):
    switch = True
else:
    switch = False

numWins = 0

for i in range(0, numTrials):
    # doors = ["Win", "Lose", "Lose", ... "Lose"] to help visualize
    choice = random.randint(1, numDoors)

    if(switch and choice > winningDoors): # switching and having chosen the losing door, end up winning
        numWins += 1

    if(not switch and choice <= winningDoors): # not switching and having chosen the winning door, end up winning
        numWins += 1

if (switch):
    print("You won " + str(numWins) + " out of " + str(numTrials) + " times by switching")
else:
    print("You won " + str(numWins) + " out of " + str(numTrials) + " times by NOT switching")


# can think of it that if you pick winning door you lose, and if you pick the losing door you win, the probabilities get switched because you also have switched your answer
# amd you're more likely to pick the losing door than you are the winning door