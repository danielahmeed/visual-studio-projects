sentence = input('Enter a Sentence: ').lower()
words = sentence.split()

for i, word in enumerate(words):

    for j, letter in enumerate(word):
                words[i] = word[j+1:] + word[0] + "iel"
                has_vowel = True
                break

pig_latin = ' '.join(words)
print("Pig Latin: ", pig_latin)