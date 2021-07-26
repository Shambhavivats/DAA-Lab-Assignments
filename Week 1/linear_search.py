
def readFile():
   
    n = int(input())
    for i in range(n):
        size = int(input())
        array = input()
        array = array.split()
        array = [int(element) for element in array]
        key = int(input())
        linearSearch(array,size,key)

def linearSearch(array,size,key):
    count=0
    for num in range(size):
        if array[num]==key:
            count=count+1
            print("Present", count)
            return 0
        else:
            count=count+1
    print("Not Present",count)
    
if __name__ == '__main__':
    readFile()
