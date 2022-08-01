word = input("Enter word you want to reverse ")


def reversed_string(string):
    ReversedString = ''
    iterator = 1
    while iterator <= len(string):
        ReversedString = ReversedString + string[-iterator]
        iterator += 1
    return ReversedString


print(reversed_string(word))
