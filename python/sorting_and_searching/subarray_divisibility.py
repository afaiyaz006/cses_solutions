from collections import defaultdict

if __name__=='__main__':
    n=int(input())
    a=list(map(int,input().split()))
    s=[0]
    res=0
    d={
        '0':1
    }
    
    for i in a:
        s.append(s[-1]+i)
        f=s[-1]%n
        res+=d.get(str(f),0)
        d[str(s[-1]%n)]=d.get(str(s[-1]%n),0)+1    
    print(res)
