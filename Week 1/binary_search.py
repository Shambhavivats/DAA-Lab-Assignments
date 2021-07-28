def readFile():
    n=int(input())
    for i in range(n):
        size=int(input())
        array=input()
        array = array.split()
        array=[int(element) for element in array ]
        key=int(input())
        l=0
        r=size-1
        binarySearch(array,l,r,size,key) 

def binarySearch(array,l,r,size,key):
    count=0
    while l <= r:
        mid= l + (r-l)//2
        if array[mid]==key:
            count=count+1
            print("Present",count)
            return 0
        elif array[mid]<key:
            count=count+1
            l=mid+1
        elif array[mid]>key:
            count=count+1
            r=mid-1
    print("Not Present",count)
    

if __name__=='__main__':
    readFile()
            


