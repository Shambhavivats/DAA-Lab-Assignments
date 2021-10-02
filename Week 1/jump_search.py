def readFile():
   
    n = int(input())
    for i in range(n):
        size = int(input())
        array = input()
        array = array.split()
        array = [int(element) for element in array]
        key = int(input())
        jump=int(input())
        JumpSearch(array,size,key,jump)

def linearSearch(array,index,size,key,count):
    for num in range(index+1,size):
        if array[num]==key:
            count=count+1
            return count
        else:
            count=count+1
    print("Not Present",count)
    return 0

def JumpSearch(array,size,key,jump):
    count=0
    if array[0]==key:
        count=count+1
        print("Present",count)
        return 0
    else:
        count=count+1
    i=1
    while i<size and array[i]<=key:
        count=count+1
        i=i+jump
    l=linearSearch(array,int(i/2),size,key,count)
    if(l>0):
        print("Present",l)
    else:
        return 0


    
if __name__ == '__main__':
    readFile()
