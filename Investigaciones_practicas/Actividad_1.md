**📤 Informe de Funciones de Librerías Estándar en C**

---

## 📚 Librería

## **1. strlen**  
**Propósito:** Calcular longitud de una cadena (sin incluir '\0').  
**Prototipo:** `size_t strlen(const char *str);`  
**Parámetros:** `str` - cadena a medir.  
**Ejemplo:**  
```c
    #include 
    #include 

        int main() {
        char texto[] = "Hola";
        printf("Longitud: %zu", strlen(texto));  // Salida: 4
        return 0;
    }
```

---

### **2. strcpy**  
**Propósito:** Copiar una cadena a otra.  
**Prototipo:** `char *strcpy(char *dest, const char *src);`  
**Parámetros:**  
- `dest`: Destino (debe tener espacio suficiente).  
- `src`: Cadena origen.  
**Ejemplo:**  
```c
    #include 
    #include 

        int main() {
        char origen[] = "Copiado";
        char destino[20];
        strcpy(destino, origen);
        printf("%s", destino);  // Salida: Copiado
        return 0;
        }
```

---

### **3. strncpy**  
**Propósito:** Copiar `n` caracteres de una cadena.  
**Prototipo:** `char *strncpy(char *dest, const char *src, size_t n);`  
**Parámetros:**  
- `dest`: Destino.  
- `src`: Origen.  
- `n`: Máximo de caracteres a copiar.  
**Ejemplo:**  
```c
    #include 
    #include 

        int main() {
        char origen[] = "Ejemplo";
        char destino[10];
        strncpy(destino, origen, 3);
        destino[3] = '\0';  // Asegura terminación
        printf("%s", destino);  // Salida: Eje
        return 0;
        }
```

---

### **4. strcat**  
**Propósito:** Concatenar dos cadenas.  
**Prototipo:** `char *strcat(char *dest, const char *src);`  
**Parámetros:**  
- `dest`: Cadena destino (debe tener espacio).  
- `src`: Cadena a añadir.  
**Ejemplo:**  
```c
    #include 
    #include 

        int main() {
        char saludo[20] = "Hola ";
        strcat(saludo, "Mundo");
        printf("%s", saludo);  // Salida: Hola Mundo
        return 0;
        }
```

---

### **5. strncat**  
**Propósito:** Concatenar `n` caracteres de una cadena.  
**Prototipo:** `char *strncat(char *dest, const char *src, size_t n);`  
**Parámetros:**  
- `dest`: Destino.  
- `src`: Origen.  
- `n`: Máximo de caracteres a añadir.  
**Ejemplo:**  
```c
    #include 
    #include 

    int main() {
        char texto[20] = "Hola ";
        strncat(texto, "Mundo Feliz", 5);
        printf("%s", texto);  // Salida: Hola Mundo
        return 0;
        }
```

---

### **6. strcmp**  
**Propósito:** Comparar dos cadenas (lexicográficamente).  
**Prototipo:** `int strcmp(const char *str1, const char *str2);`  
**Parámetros:**  
- `str1`, `str2`: Cadenas a comparar.  
**Retorno:**  
- `0`: Iguales.  
- `0`: `str1` mayor que `str2`.  
**Ejemplo:**  
```c
    #include 
    #include 

        int main() {
        char a[] = "abc";
        char b[] = "abd";
        printf("%d", strcmp(a, b));  // Salida: -1 (a 
        #include 

            int main() {
            char a[] = "abcde";
            char b[] = "abcfg";
            printf("%d", strncmp(a, b, 3));  // Salida: 0 (primeros 3 iguales)
            return 0;
    }   }
```

---

### **8. strchr**  
**Propósito:** Buscar primera aparición de un carácter.  
**Prototipo:** `char *strchr(const char *str, int c);`  
**Parámetros:**  
- `str`: Cadena a buscar.  
- `c`: Carácter (como entero).  
**Retorno:** Puntero a la posición o `NULL`.  
**Ejemplo:**  
```c
    #include 
    #include 

    int main() {
        char texto[] = "Buscar";
        char *pos = strchr(texto, 'c');
        if (pos) printf("Encontrado en posición %ld", pos - texto);  // Salida: 3
        return 0;
    }
```

---

### **9. strstr**  
**Propósito:** Buscar subcadena.  
**Prototipo:** `char *strstr(const char *haystack, const char *needle);`  
**Parámetros:**  
- `haystack`: Cadena principal.  
- `needle`: Subcadena a buscar.  
**Ejemplo:**  
```c
    #include 
    #include 

    int main() {
    char texto[] = "Programar en C";
    char *sub = strstr(texto, "en");
    printf("%s", sub);  // Salida: en C
    return 0;
    }
```

---

### **10. strtok**  
**Propósito:** Dividir cadena en tokens usando delimitadores.  
**Prototipo:** `char *strtok(char *str, const char *delimitadores);`  
**Parámetros:**  
- `str`: Cadena a tokenizar (`NULL` en llamadas posteriores).  
- `delimitadores`: Caracteres separadores.  
**Ejemplo:**  
```c
    #include 
    #include 

    int main() {
        char texto[] = "Uno,Dos,Tres";
        char *token = strtok(texto, ",");
        while (token) {
        printf("%s\n", token);
        token = strtok(NULL, ",");
        }
    return 0;
    }
```

---

## 🔤 Librería 

### **1. isalpha**  
**Propósito:** Verificar si un carácter es alfabético.  
**Prototipo:** `int isalpha(int c);`  
**Retorno:** Distinto de `0` si es letra.  
**Ejemplo:**  
```c
#include 
#include 

int main() {
    printf("%d", isalpha('A'));  // Salida: 1024 (no cero)
    return 0;
}
```

---

### **2. isdigit**  
**Propósito:** Verificar si un carácter es dígito.  
**Prototipo:** `int isdigit(int c);`  
**Ejemplo:**  
```c
#include 
#include 

int main() {
    printf("%d", isdigit('5'));  // Salida: 2048 (no cero)
    return 0;
}
```

---

### **3. isalnum**  
**Propósito:** Verificar si es alfanumérico.  
**Prototipo:** `int isalnum(int c);`  
**Ejemplo:**  
```c
#include 
#include 

int main() {
    printf("%d", isalnum('9'));  // Salida: 8 (no cero)
    return 0;
}
```

---

### **4. islower**  
**Propósito:** Verificar si es minúscula.  
**Prototipo:** `int islower(int c);`  
**Ejemplo:**  
```c
#include 
#include 

int main() {
    printf("%d", islower('a'));  // Salida: 2 (no cero)
    return 0;
}
```

---

### **5. isupper**  
**Propósito:** Verificar si es mayúscula.  
**Prototipo:** `int isupper(int c);`  
**Ejemplo:**  
```c
#include 
#include 

int main() {
    printf("%d", isupper('Z'));  // Salida: 1 (no cero)
    return 0;
}
```

---

### **6. tolower**  
**Propósito:** Convertir a minúscula.  
**Prototipo:** `int tolower(int c);`  
**Ejemplo:**  
```c
#include 
#include 

int main() {
    printf("%c", tolower('B'));  // Salida: b
    return 0;
}
```

---

### **7. toupper**  
**Propósito:** Convertir a mayúscula.  
**Prototipo:** `int toupper(int c);`  
**Ejemplo:**  
```c
#include 
#include 

int main() {
    printf("%c", toupper('k'));  // Salida: K
    return 0;
}
```

--- 

**Nota:** Los valores de retorno de `isalpha`, `isdigit`, etc., son específicos de la implementación, pero siempre son distintos de cero para `true`. Los ejemplos usan `printf` con `%d` para mostrar el concepto.

Citations:
[1] https://www.tutorialesprogramacionya.com/cya/detalleconcepto.php?punto=15&codigo=15&inicio=0
[2] https://www.youtube.com/watch?v=ZcGp6r4PyXg
[3] https://www.ibm.com/docs/es/i/7.5?topic=files-stringh
[4] https://www.youtube.com/watch?v=PxiCY5EQdTQ
[5] https://concentra.com.ar/funciones-de-libreria-string-h/
[6] https://www.youtube.com/watch?v=CJ_pzdZ39N4
[7] https://lc.fie.umich.mx/~rochoa/Manuales/C/MANUAL/node18.html
[8] https://www.youtube.com/watch?v=p0Dofc5J15c
[9] https://www.ibm.com/docs/es/i/7.6?topic=functions-strchr-search-character
