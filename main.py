

class item:
    def __init__(self , id , itemName , price):
        self.id = id
        self.itemName = itemName
        self.price = price

        
#create bill display function
def display(l , cName , cAddress):
    total = 0
    print("\n\n\n")
    print("\t    Aniket Store    ")
    print("\t   --------------    ")
    print(f"Name : {cName} \t Address : {cAddress}\n")
    for obj in l:
        print(f"Id : {obj.id} \t ItemName : {obj.itemName}\tPrice : {obj.price}")
        print("------------------------------------------------")
        total += obj.price
    print(f"\t\tTotal : {total}")  
    print("\n")  
    print("\tThanks for visiting")
    print("\n\n")


# store object array
list = []  

print("\n\n")
print("Hello Everyone.......")
cName = input("Enter your name       ")
cAddress = input("Enter your address    ")
totalItems = int(input("Enter total items    "))
print("\n")

# take input item details
for i in range(0 , totalItems):
    id = (i+1)
    name = input("Enter item name     ")
    price = int(input("Enter price    "))
    list.append(item(id , name , price))

#call display function
display(list , cName , cAddress)    

    
