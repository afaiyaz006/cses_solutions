
class Vector:
    def __init__(self,x=0,y=0):
        self.x=x
        self.y=y
    def __add__(self,other):
        x=self.x+other.x
        y=self.y+other.y
        return Vector(x,y)

    def __sub__(self,other):
        x=self.x-other.x
        y=self.y-other.y
        return Vector(x,y)

    def __mul__(self,other):
    
        res=self.x*other.y-other.x*self.y
        return res

    def __str__(self):
        return f'{self.x}i+{self.y}j'   

    def __eq__(self,other):
        return (self.x==other.x and self.y==other.y)

    def __lt__(self,other):
        return (self.x<other.x and self.y<other.y)

    def __gt__(self,other):
        return (self.x>other.x and self.y>other.y)
def ontheSegment(o,m,n):
    return (o.x>=min(m.x,n.x) and o.x<=max(m.x,n.x)
    and (o.y>=min(m.y,n.y) and o.y<=max(m.y,n.y)))
        


if __name__=='__main__':
    t=int(input())
    while t>0:
        x1,y1,x2,y2,x3,y3,x4,y4=map(int,input().split(' '))
        

        a=Vector(x1,y1)
        b=Vector(x2,y2)
        c=Vector(x3,y3)
        d=Vector(x4,y4)

        #print(a,b,c,d)
        
        check_a=(a-c)*(a-d)
        check_b=(b-c)*(b-d)
        check_c=(c-a)*(c-b)
        check_d=(d-a)*(d-b)

        #print(check_a,check_b,check_c,check_d)
        
        if(a==c or a==d or b==c or b==d):
                print(f"YES")
        elif(check_a==0 and check_b==0 and check_c==0 and check_d==0):
                if(ontheSegment(a,c,d)):
                    print(f"YES")
                elif(ontheSegment(b,c,d)):
                    print(f"YES")
                elif(ontheSegment(c,a,b)):
                    print(f"YES")
                elif(ontheSegment(d,a,b)):
                    print(f"YES")
                else:
                    print(f"NO")   
        
        elif((check_a>0 and check_b<=0) or (check_a>=0 and check_b<0)):
            if((check_c>0 and check_d<=0) or(check_c>=0 and check_d<0)):
                print(f"YES")
            elif((check_c<0 and check_d>=0) or (check_c<=0 and check_d>0)):
                print(f"YES")
            else:
                print(f"NO")

        elif(check_a<0 and check_b>=0 or (check_a<=0 and check_b>0)):
            if((check_c>0 and check_d<=0) or(check_c>=0 and check_d<0)):
                print(f"YES")
            elif((check_c<0 and check_d>=0) or (check_c<=0 and check_d>0)):
                print(f"YES")
            else:
                print(f"NO")

        
        else:
            print(f"NO")
        #print(check_a,check_b,check_c,check_d)         
        t-=1
        
        

        