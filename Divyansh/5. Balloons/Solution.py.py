t = int(input())

for i in range(0,t):
    n=int(input())
    l=[]
    f=0
    count=0
    
    
    l = list(map(int, input().split()))
    
        
    for k in range(0,len(l)):
        count=count+1
        if(l[k]<=7):
            f=f+1
            
        if f==7:
            print(count)
            break
            
