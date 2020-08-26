#buscar el menor en mi array
#crear dos subs arrays para llevar el control de mi algoritmo

import sys 
array = [64, 25, 12, 22, 11] 

def selectioSort(array):

    #recorrer todo nuestro array
    for i in range(len(array)):
        #encotrar el valor minimo restante dentro de nuestro array desordenado

        idxDes = i
        for j in range(i+1, len(array)):
            if array[idxDes]> array[j]:
                idxDes = j

#ya que encontramos el minimo lo vamos a cambiar
#por el primer valor de nuestro array desordenado
        array[i], array[idxDes] = array[idxDes], array[i]

selectioSort(array)
print ("Sorted array") 
for i in range(len(array)): 
    print("%d" %array[i]),  