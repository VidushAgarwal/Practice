from tokenize import Name
import pandas as pd
data=[['Burger',50,5],['Pizza',100,5],['Coke',20,10],['Tea',10,20]]
df=pd.DataFrame(data, columns=['Name','Price','Quantity'])
print(df)
df.to_csv('data.csv', index=False)
b=pd.read_csv('data.csv')
print()
print(b)
c=b.to_dict()
print(c)
n=input("Enter name of item")
q=int(input("Enter quantity"))
i=list(c['Name'].values()).index(n)
print(i)
bill=c['Price'][i]*q
print(bill)