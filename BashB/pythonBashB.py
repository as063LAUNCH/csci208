#Anushikha Sharma and Cristal Hermosillo
# Bash B


import sys

def findAllCombos(setOfChars, combo, comboLength):

    if len(setOfChars) == 0:
        if len(combo) == comboLength:
            return combo+ ' '
        else:
            return ''
    elif len(combo) == comboLength:
	    return combo+' '
    else:
        firstChar = setOfChars[0]
        restOfChars = setOfChars[1:]
        restOfCombo = findAllCombos(restOfChars, combo, comboLength)
        firstCombo = findAllCombos(restOfChars, firstChar + combo, comboLength)
        return (restOfCombo + firstCombo)
        
def main():
    charStr = "abc"
    chars=''
    for x in [1,2,3]:
        chars += findAllCombos(charStr,'' , x)

    for j in chars.split():
        print (j)
        


if __name__ == '__main__':

	main()