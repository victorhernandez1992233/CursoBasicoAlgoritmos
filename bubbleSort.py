#comnzar a hacer comparaciones de elementos adyasentes
#repetir hasta tenir una pasada completa sin ningun swap

def bubbleSort(array):
    n = len(array)


    for i in range(n):
        count = 0
        print(array)
        for j in range(0, n-i-1):
            if array[j] > array[j+1]:
                array[j], array[j+1] = array[j+1], array[j]
                count = 1
        if count == 0 :
            break

array = [190, 1200, 1, 2, 4, 55, 1000, 6, 800]

bubbleSort(array)

print("el arreglo ordenado de forma asendente es:0")

for i in range(len(array)):
    print("%d"%array[i]),




print("hola platzi")