# (Análisis de Algoritmos) Taller 1: Lengujes formales y simplificación lógica

## Propósito

### Lenguaje formal
Suponiendo siguiente lenguaje formal:

![L_5=\{ S_5, \varphi _5 \}](https://render.githubusercontent.com/render/math?math=L_5%3D%5C%7B%20S_5%2C%20%5Cvarphi%20_5%20%5C%7D)
donde:
![S_5=\{ a, b, o, *\}](https://render.githubusercontent.com/render/math?math=S_5%3D%5C%7B%20a%2C%20b%2C%20o%2C%20*%5C%7D)
![\varphi _5=\{ x \in E_S_5 / x](https://render.githubusercontent.com/render/math?math=%5Cvarphi%20_5%3D%5C%7B%20x%20%5Cin%20E_S_5%20%2F%20x) empieza con ![a](https://render.githubusercontent.com/render/math?math=a) y no contiene ![* \}](https://render.githubusercontent.com/render/math?math=*%20%5C%7D).

El programa debe:

1. Validar los símbolos del lenguaje.
2. Determinar si el argumento cumple con la condición dada o no la cumple.
3. Leer los argumentos por la línea de comandos
4. Retornar inmediatamente.
5. Si se ejecuta sin argumentos, mostrará los integrantes del grupo.
   

#### Ejemplo
```bash
./dist/programa a**o

NO Cumple con la condición.
```

### Simplificación Lógica

El programa en C/C++ debe simplificar expresiones lógicas con las reglas de sustitución necesarias para la ejecución del mismo.

El programa debe:
1. Asumir que sólo se ingresarán caracteres válidos.
2. Considerar que el argumento estará entre comillas dobles.
3. Existirá sólo un espacio entre los distintos caracteres.
4. Usar sólo los siguientes símbolos:
   - Letras: `p`, `q` y `r`.
   - Negación: ¬ por `~`
   - Implicancia: → por `=>`
   - Conjunción: v por `&&`
   - Disyunción: ʌ por `||`

#### Ejemplo
```bash
./dist/programa “~ [ p => ~ ( q && p ) ]”

p || q

Demostración:
“~ [ p => ~ ( q && p ) ]”
“~ [~ p && ~ ( q && p ) ]”
“~ [~ p && ~ q || ~p ) ]”
“~ [~ p &&~p ||~ q ) ]”
“~ [~ p &&~ q ) ]”
“p || q”

```

## Compilar

Posicionarse en la carpeta principal y ejectuar el comando `make`

## Ejecutar

``` 
cd dist
./programa [argumento1] [argumento_n]
```