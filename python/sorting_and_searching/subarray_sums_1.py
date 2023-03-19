if __name__=='__main__':
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    s=[0]
    d=dict()
    
    for i in range(0,len(a)):
        s.append(s[-1]+a[i])
        if str(s[-1]) not in d:
            d[str(s[-1])]=1
    co=0
    for i in range(0,len(s)):
        if str(int(s[i]+k))  in d:
            co+=1
    print(f"{co}")