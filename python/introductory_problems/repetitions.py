def lrp(s):
    temp_max=0
    global_max=0
    for i in range(0,len(s)):
        temp_max=0
        temp_char=s[i]
        temp_index=i
 
        while(temp_index<len(s)):
            if(temp_char==s[temp_index]):
                temp_max+=1
            else:
                break
            temp_index+=1
 
        i+=temp_index
        global_max=max(temp_max,global_max)
 
    return global_max
def lrp_fast(s):
    temp_max=0
    global_max=0
    for i in range(0,len(s)):
        if(i>0):
            if(s[i]==s[i-1]):
                temp_max+=1
            else:
                global_max=max(global_max,temp_max+1)
                temp_max=0
    
    global_max=max(global_max,temp_max+1)
    return global_max
    
if __name__=='__main__':
    s=str(input())
    print(lrp_fast(s))