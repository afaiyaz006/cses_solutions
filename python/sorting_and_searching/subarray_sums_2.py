if __name__=='__main__':
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    s=[0]
    d=dict()
    
    co=0 #counter
    
    already=dict()
    already[str(0)]=0
    d[str(0)]=0
    for i in range(0,len(a)):
        s.append(s[-1]+a[i])
        key=str(int(s[-1]))
        if key not in d:
            d[key]=1
        
        elif key in d:
            d[key]+=1
        if str(s[i]) not in already:
            already[str(s[i])]=0

    #print(d.items())
    for i in range(1,len(s)):
        print(d)
        print(already)
        key=str(int(s[i-1]+k))
        
        if key in d:
            if key in already:
                needed=d[key]-already[key]
                if needed>0:
                    co+=needed
            else:
                
                co+=d[key]
        if str(s[i]) in already:
            already[str(s[i])]+=1
        
        
    print(f"{co}")