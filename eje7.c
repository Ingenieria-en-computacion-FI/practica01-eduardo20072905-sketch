//sin ejecutar determina cual dirección es mayor &m[0][3] o &m[1][0] justifica matematicamente
//&m[0][3] es mayor que &m[1][0] debido a que el almacenamiento es por columnas, 
//lo que significa que los elementos de la primera columna (m[0][0], m[0][1], m[0][2], m[0][3]) 
//están almacenados en direcciones de memoria consecutivas, seguidos por los elementos de la segunda columna.

//una fórmula para calcular la dirección de un elemento en una matriz bidimensional almacenada por columnas es:
//&m[i][j] = &m[0][0] + (i * número de columnas + j) * tamaño del tipo
//En este caso, para &m[0][3]:
//&m[0][3] = &m[0][0] + (0 * 4 + 3) * tamaño del tipo = &m[0][0] + 3 * tamaño del tipo
//Y para &m[1][0]:
//&m[1][0] = &m[0][0] + (1 * 4 + 0) * tamaño del tipo = &m[0][0] + 4 * tamaño del tipo
//Dado que 4 * tamaño del tipo es mayor que 3 * tamaño del tipo, se concluye que &m[1][0] es mayor que &m[0][3].