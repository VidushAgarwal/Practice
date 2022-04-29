from tokenize import Name
import pandas as pd
df=pd.read_csv('data.csv')
print(df)
n=0
while True:
    dfd=df.to_dict()
    print()
    name=input("Enter name of item  ")
    quantity=int(input("Enter quantity   "))
    ind=list(dfd['Name'].values()).index(name)
    av=dfd['Quantity'][ind]
    if av<quantity:
        print("Please enter values less than :",av)
        continue
    bill=dfd['Price'][ind]*quantity
    print()
    sale={'Name':{0: 'Burger', 1: 'Pizza', 2: 'Coke', 3: 'Tea'},'Price': {0: 50, 1: 100, 2: 20, 3: 10}, }
    
    print(bill)
    print("Press Enter to continue any other key to exit")
    if(input()!=""):
        exit()