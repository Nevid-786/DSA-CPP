
def combinations(list,i,result,target):
   
    if(i>=len(list)):
        return result
    if(target==0):
        return result
    elif(target>=list[i]):
        result.append(list[i])
        target=target-list[i]
        print("append",list[i])
        # result.pop()
        
        combinations(list,i,result,target)
        
    combinations(list,i+1,result,target)
    return result
        
    

list = [3,4,2,6,3,1]
target=4
finallist=[]
for i in range(len(list)):
    result=combinations(list,i,[],target)
    finallist.append(result)
    
print(finallist)

        
        
        