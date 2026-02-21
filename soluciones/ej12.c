//int m[3][5]; 
//Base= 4000 --> m[0][0]=4000

//Calcula dirección de m[2][4];

//&m[i][j] = &m[0][0] + (i * número de columnas + j) * tamaño del tipo
//&m[2][4] = &m[0][0] + (2 * 5 + 4) * tamaño del tipo
//&m[2][4] = 4000 + (10 + 4) * tamaño del tipo
//&m[2][4] = 4000 + 14 * tamaño del tipo    
//&m[2][4] = 4000 + 14 * 4 = 4000 + 56 = 4056

//Calcula dirección de m[1][3];

//&m[1][3] = &m[0][0] + (1 * 5 + 3) * tamaño del tipo
//&m[1][3] = 4000 + (5 + 3) * tamaño del tipo
//&m[1][3] = 4000 + 8 * tamaño del tipo    
//&m[1][3] = 4000 + 8 * 4 = 4000 + 32 = 4032

//diferencia entre ambas:
//&m[2][4] - &m[1][3] = 4056 - 4032 = 24 bytes
