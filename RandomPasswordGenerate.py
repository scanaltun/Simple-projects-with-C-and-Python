import string
import random


def RandomPassword(length, level, output=[]):
    chars = string.ascii_letters
    if level > 1:
        chars = "{}{}".format(chars, string.digits)
    if level > 2:
        chars = "{}{}".format(chars, string.punctuation)

    for i in range(length):
        output.append(random.choice(chars))

    return "".join(output)

print("***********")
print("Random Password Generator")
print("***********")

passwordLength = int(input("Length: "))
passwordLevel = int(input("Level: "))

password = generatePassword(passwordLength, passwordLevel)
print("Password: {}".format(password))