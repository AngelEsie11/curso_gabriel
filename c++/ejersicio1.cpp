/*1- Crear un programa que imprima todas las palabras reservadas con su explicación
	Hint: cout, endl, <<*/


#include<iostream>

using namespace std;

int main(){
	
	
	cout<<"asm\nLa palabra clave __asm invoca el ensamblador alineado y puede aparecer siempre que una instrucción de C o C++ sea valida. No puede aparecer por sí mismo."<<endl;
	cout<<"auto\nLa palabra clave auto es una manera sencilla de declarar una variable que tiene un tipo complicado. "<<endl;
	cout<<"bool\nEl tipo bool participa en promociones enteras predeterminadas. Un valor R de tipo bool se puede convertir en un valor R de tipo int , con false como cero y true como uno. "<<endl;
	cout<<"break\nLa instrucción break finaliza la ejecución de la instrucción do , for , switch o while más próxima que la incluya. "<<endl;
	cout<<"case\nLa función CASE selecciona una entre un conjunto de expresiones a evaluar y devuelve el valor de retorno de la expresión seleccionada como su valor."<<endl;
	cout<<"catch\nEl bloque catch escribe un mensaje en el terminal CICS y, a continuación, la ejecución se reanuda en la línea después del bloque catch ."<<endl;
	cout<<"char\nLa función CHAR devuelve una representación en forma de serie de caracteres de longitud fija de: Un número entero, si el primer argumento es SMALLINT, INTEGER o BIGINT."<<endl;
	cout<<"class\nUna clase puede pensarse como una colección de variables (atributos o propiedades) y funciones (métodos) que permiten representar un conjunto de datos y especificar las operaciones o procedimientos que permiten manipular tales datos."<<endl;
	cout<<"const\nLa palabra clave const especifica que el valor de una variable es constante e indica al compilador que evite que el programador lo modifique."<<endl;
	cout<<"const_cast\nconst_cast Se usa para quitar los atributos const , volatile y __unaligned"<<endl;
	cout<<"continue\nLa instrucción continue pasa el control a la siguiente iteración de la instrucción de inclusión do , for o while más próxima en que aparece, omitiendo las restantes instrucciones en el cuerpo de la instrucción do , for o while "<<endl;
	cout<<"default\nLa opción default, es opcional, indica la sentencia que se ejecuta en caso de que el valor de la variable <var> no se corresponda con ninguna de las constantes expresadas."<<endl;
	cout<<"delete\nCuando se usa delete para desasignar memoria para un objeto de clase de C++, se llama al destructor del objeto antes de que se desasigne la memoria del objeto (si el objeto tiene un destructor). "<<endl;
	cout<<"do\nEjecuta un elemento statement repetidamente hasta que la condición de finalización (la expresión) se evalúa como cero."<<endl;
	cout<<"double\ndouble se utiliza principalmente en cálculos de programación para eliminar errores cuando se redondean valores decimales."<<endl;
	cout<<"dynamic_cast\nLa finalidad principal del operador de dynamic_cast es realizar conversionesde tipo seguro."<<endl;
	cout<<"else\nes la que indica que existe un bloque de instrucciones que se debe ejecutar en caso de que la condición dada no se cumpla."<<endl;
	cout<<"enum\nDeclara una enumeración en el ámbito de espacio de nombres, que es un tipo definido por el usuario que está compuesto de un conjunto de constantes con nombre llamadas enumeradores."<<endl;
	cout<<"explicit\nEl especificador de función explicit controla conversiones de tipo implícito no deseadas."<<endl;
	cout<<"extern\nextern 'C' especifica que la función se define en otro lugar y usa la convención de llamada del lenguaje C."<<endl;
	cout<<"false\nLa palabra clave es uno de los dos valores para una variable de tipo bool o una expresión condicional (una expresión condicional es ahora una expresión true Booleana true ). Por ejemplo, si i es una variable de tipo bool , la instrucción i = false; asigna false false a i ."<<endl;
	cout<<"float\nLa función FLOAT devuelve una representación de coma flotante de un número. FLOAT es sinónimo de DOUBLE."<<endl;
	cout<<"for\nLa instrucción for permite repetir una instrucción o una instrucción compuesta un número especificado de veces. El cuerpo de una instrucción for se ejecuta cero o más veces hasta que una condición opcional sea false."<<endl;
	cout<<"friend\nUna función friend es una función que no es miembro de una clase pero tiene acceso a los miembros privados y protegidos de la clase."<<endl;
	cout<<"goto\nLa instrucción goto transfiere el control a una etiqueta. La etiqueta especificada debe estar en la misma función y puede aparecer delante de una sola instrucción en la misma función."<<endl;
	cout<<"if\nLa instrucción if controla la bifurcación condicional. El cuerpo de una instrucción if se ejecuta si el valor de la expresión es distinto de cero. La sintaxis de la instrucción if adopta dos formatos."<<endl;
	cout<<"inline\nLa palabra clave inline indica al compilador que se prefiere la expansión alineada."<<endl;
	cout<<"int\nEl tipo int es el tipo entero básico predeterminado. Puede representar todos los números enteros en un intervalo específico de la implementación. "<<endl;
	cout<<"long\nPara guardar valores más pequeños y más grandes podemos usar el tipo de variable long."<<endl;
	cout<<"mutable\nPara guardar valores más pequeños y más grandes podemos usar el tipo de variable long."<<endl;
	cout<<"mutable\nC++ además provee inmutabilidad abstracta mediante la palabra clave mutable , que permite modificar un campo desde un método constante."<<endl;
	cout<<"namespace\nLos espacios de nombres (namespace) de C++ permiten declarar identificadores sin que éstos se solapen, indiscriminadamente, con los declarados en otras zonas de código."<<endl;
	cout<<"new\nUna expresión de asignación que contiene el operador new se utiliza para buscar almacenamiento en el almacén libre para el objeto que se está creando. La nueva expresión devuelve un puntero al objeto creado y se puede utilizar para inicializar el objeto."<<endl;
	cout<<"operator\\nLos operadores son símbolos (o palabras) que representan y ejecutan una operación en C++."<<endl;
	cout<<"private\nCuando precede a una lista de miembros de clase, la palabra clave private especifica que esos miembros son accesibles solo desde funciones miembro y friend de la clase"<<endl;
	cout<<"protected\nCuando precede al nombre de una clase base, la palabra clave protected especifica que los miembros públicos y protegidos de la clase base son miembros protegidos de sus clases derivadas."<<endl;
	cout<<"public\npublic (C++) Cuando precede a una lista de miembros de clase, la palabra clave public especifica que esos miembros son accesibles desde cualquier función. "<<endl;
	cout<<"register\nLos registros permiten almacenar un conjunto de datos bajo un mismo nombre. También conocidos como estructuras, fueron el primer indicio de lo que posteriormente entenderíamos como orientación a objetos en C++."<<endl;
	cout<<"reinterpret_cast\nPermite que cualquier puntero se convierta en cualquier otro tipo de puntero. También permite convertir cualquier tipo entero en cualquier tipo de puntero y viceversa."<<endl;
	cout<<"return\nFinaliza la ejecución de una función y devuelve el control a la función de llamada (o al sistema operativo si se transfiere el control de la función main )."<<endl;
	cout<<"short\n“ short ” y “ long ”: Modifica el tamaño en bits del entero. Existen por tanto tres tipos de enteros: “ int ”, “ short int ” (que se puede abreviar como “ short ”), y “ long int ” (que se puede abreviar como “ long ”)."<<endl;
	cout<<"signed\nEl modificador de tipo signed define que el valor de una variable numérica puede ser positivo o negativo."<<endl;
	cout<<"sizeof\nEl operador sizeof proporciona la cantidad de almacenamiento, en bytes, necesaria para almacenar un objeto del tipo del operando."<<endl;
	cout<<"static\nAl interior de la definición de una clase se utiliza la palabra reservada static para declarar miembros de la clase que no están ligados a ninguna instancia (objeto) de la misma."<<endl;
	cout<<"static_cast\nEl operador static_cast convierte la variable j en un tipo float ."<<endl;
	cout<<"struct\nLas clases y los structs son las construcciones con las que define sus propios tipos. "<<endl;
	cout<<"switch\nUna instrucción switch hace que el control se transfiera a una instrucción labeled-statement en el cuerpo de la instrucción, en función del valor de condition ."<<endl;
	cout<<"template\nLos templates de función son planos y no código real de C++, consumidos por el compilador para generar el código pertinente en función de las llamadas que se hacen a la función."<<endl;
	cout<<"this\nEl puntero this es una variable predefinida para todas las funciones u operadores miembro de una clase. Este puntero contiene la dirección del objeto concreto de la clase al que se está aplicando la función o el operador miembro. "<<endl;
	cout<<"throw\nUna expresión throw indica que se ha producido una condición excepcional, a menudo un error, en un bloque try ."<<endl;
	cout<<"try\nUtilice un bloque try para indicar qué áreas del programa pueden generar excepciones que desee manejar inmediatamente."<<endl;
	cout<<"typedef\nLos nombres de typedef permiten encapsular detalles de la implementación que pueden cambiar. "<<endl;
	cout<<"typeid\ntypeid se usa para obtener Type para un tipo en tiempo de compilación."<<endl;
	cout<<"typename\nn las definiciones de plantilla, typename proporciona una sugerencia al compilador de que un identificador desconocido es un tipo."<<endl;
	cout<<"union\nLas uniones proporcionan una forma de manipular diferentes clases de datos dentro de una sola área de almacenamiento. "<<endl;
	cout<<"unsigned\nUNSIGNED significa que solo permite positivos. Si usas UNSIGNED no se guarda el signo. El signo ocupa un byte, así que al no guardarlo, tienes un byte más disponible para guardar más números."<<endl;
	cout<<"using\nUna directiva using proporciona acceso a todos los calificadores de espacio de nombres y al operador de ámbito. "<<endl;
	cout<<"virtual\nUna función virtual es una función miembro que se espera volver a definir en clases derivadas."<<endl;
	cout<<"void\nCuando se usa como un tipo de valor devuelto de función, la palabra clave void especifica que la función no devuelve ningún valor."<<endl;
	cout<<"volatile\nSi un nombre se declara como volatile , el compilador recarga el valor de la memoria cada vez que el programa tiene acceso al mismo."<<endl;
	cout<<"while\nPuede utilizar la sentencia while para repetir un conjunto de operaciones hasta que se cumpla la condición especificada. La sentencia while utilizada en el Lenguaje de políticas de Impact es la misma que la utilizada en lenguajes de programación tales como C, C++ y Java."<<endl;
	
	
	return 0;
}
