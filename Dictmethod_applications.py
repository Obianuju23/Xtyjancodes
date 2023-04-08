capital_city = {"Nepal": "Kathmandu", "Italy": "Rome", "England": "London"}
print(capital_city)
#adding an elemrnt to a python dictionary
capital_city ["Nigeria"] = "Abuja"
print(capital_city)
#changing value associated with a key in a python dictionary
capital_city ["Nigeria"] = "Lagos"
print(capital_city)
#accessing the value of an elemrnt in a python dictionary
print(capital_city ["Nigeria"])
#deleting the key/value(pairs) of an elemrnt in a python dictionary
del capital_city ["Nigeria"]
print(capital_city)
#trying to remove an element that doesnt exist within the dictionary and it return KeyError:Nigeria
#capital_city.pop ("Nigeria")
capital_city ["Nigeria"] = "Abuja"
print(capital_city)
#removes the pairs England
capital_city.pop ("England")
#returns the value of the removed key
print(capital_city.pop ("Nigeria"))
print(capital_city)
