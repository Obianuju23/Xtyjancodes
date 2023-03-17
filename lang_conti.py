# Can you create a program so that all items of the languages list are printed except Swift and C++?


    
Languages = ["Python", "Java", "Swift", "C", "C++"]
for language in Languages:
    if language == "Swift" or language == "C++":
        continue
    print(language)
