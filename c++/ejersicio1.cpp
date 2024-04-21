/*1- Crear un programa que imprima todas las palabras reservadas con su explicaci�n
	Hint: cout, endl, <<*/


#include<iostream>

using namespace std;

int main(){
	
	
	cout<<"asm\nLa palabra clave __asm invoca el ensamblador alineado y puede aparecer siempre que una instrucci�n de C o C++ sea valida. No puede aparecer por s� mismo."<<endl;
	cout<<"auto\nLa palabra clave auto es una manera sencilla de declarar una variable que tiene un tipo complicado. "<<endl;
	cout<<"bool\nEl tipo bool participa en promociones enteras predeterminadas. Un valor R de tipo bool se puede convertir en un valor R de tipo int , con false como cero y true como uno. "<<endl;
	cout<<"break\nLa instrucci�n break finaliza la ejecuci�n de la instrucci�n do , for , switch o while m�s pr�xima que la incluya. "<<endl;
	cout<<"case\nLa funci�n CASE selecciona una entre un conjunto de expresiones a evaluar y devuelve el valor de retorno de la expresi�n seleccionada como su valor."<<endl;
	cout<<"catch\nEl bloque catch escribe un mensaje en el terminal CICS y, a continuaci�n, la ejecuci�n se reanuda en la l�nea despu�s del bloque catch ."<<endl;
	cout<<"char\nLa funci�n CHAR devuelve una representaci�n en forma de serie de caracteres de longitud fija de: Un n�mero entero, si el primer argumento es SMALLINT, INTEGER o BIGINT."<<endl;
	cout<<"class\nUna clase puede pensarse como una colecci�n de variables (atributos o propiedades) y funciones (m�todos) que permiten representar un conjunto de datos y especificar las operaciones o procedimientos que permiten manipular tales datos."<<endl;
	cout<<"const\nLa palabra clave const especifica que el valor de una variable es constante e indica al compilador que evite que el programador lo modifique."<<endl;
	cout<<"const_cast\nconst_cast Se usa para quitar los atributos const , volatile y __unaligned"<<endl;
	cout<<"continue\nLa instrucci�n continue pasa el control a la siguiente iteraci�n de la instrucci�n de inclusi�n do , for o while m�s pr�xima en que aparece, omitiendo las restantes instrucciones en el cuerpo de la instrucci�n do , for o while "<<endl;
	cout<<"default\nLa opci�n default, es opcional, indica la sentencia que se ejecuta en caso de que el valor de la variable <var> no se corresponda con ninguna de las constantes expresadas."<<endl;
	cout<<"delete\nCuando se usa delete para desasignar memoria para un objeto de clase de C++, se llama al destructor del objeto antes de que se desasigne la memoria del objeto (si el objeto tiene un destructor). "<<endl;
	cout<<"do\nEjecuta un elemento statement repetidamente hasta que la condici�n de finalizaci�n (la expresi�n) se eval�a como cero."<<endl;
	cout<<"double\ndouble se utiliza principalmente en c�lculos de programaci�n para eliminar errores cuando se redondean valores decimales."<<endl;
	cout<<"dynamic_cast\nLa finalidad principal del operador de dynamic_cast es realizar conversionesde tipo seguro."<<endl;
	cout<<"else\nes la que indica que existe un bloque de instrucciones que se debe ejecutar en caso de que la condici�n dada no se cumpla."<<endl;
	cout<<"enum\nDeclara una enumeraci�n en el �mbito de espacio de nombres, que es un tipo definido por el usuario que est� compuesto de un conjunto de constantes con nombre llamadas enumeradores."<<endl;
	cout<<"explicit\nEl especificador de funci�n explicit controla conversiones de tipo impl�cito no deseadas."<<endl;
	cout<<"extern\nextern 'C' especifica que la funci�n se define en otro lugar y usa la convenci�n de llamada del lenguaje C."<<endl;
	cout<<"false\nLa palabra clave es uno de los dos valores para una variable de tipo bool o una expresi�n condicional (una expresi�n condicional es ahora una expresi�n true Booleana true ). Por ejemplo, si i es una variable de tipo bool , la instrucci�n i = false; asigna false false a i ."<<endl;
	cout<<"float\nLa funci�n FLOAT devuelve una representaci�n de coma flotante de un n�mero. FLOAT es sin�nimo de DOUBLE."<<endl;
	cout<<"for\nLa instrucci�n for permite repetir una instrucci�n o una instrucci�n compuesta un n�mero especificado de veces. El cuerpo de una instrucci�n for se ejecuta cero o m�s veces hasta que una condici�n opcional sea false."<<endl;
	cout<<"friend\nUna funci�n friend es una funci�n que no es miembro de una clase pero tiene acceso a los miembros privados y protegidos de la clase."<<endl;
	cout<<"goto\nLa instrucci�n goto transfiere el control a una etiqueta. La etiqueta especificada debe estar en la misma funci�n y puede aparecer delante de una sola instrucci�n en la misma funci�n."<<endl;
	cout<<"if\nLa instrucci�n if controla la bifurcaci�n condicional. El cuerpo de una instrucci�n if se ejecuta si el valor de la expresi�n es distinto de cero. La sintaxis de la instrucci�n if adopta dos formatos."<<endl;
	cout<<"inline\nLa palabra clave inline indica al compilador que se prefiere la expansi�n alineada."<<endl;
	cout<<"int\nEl tipo int es el tipo entero b�sico predeterminado. Puede representar todos los n�meros enteros en un intervalo espec�fico de la implementaci�n. "<<endl;
	cout<<"long\nPara guardar valores m�s peque�os y m�s grandes podemos usar el tipo de variable long."<<endl;
	cout<<"mutable\nPara guardar valores m�s peque�os y m�s grandes podemos usar el tipo de variable long."<<endl;
	cout<<"mutable\nC++ adem�s provee inmutabilidad abstracta mediante la palabra clave mutable , que permite modificar un campo desde un m�todo constante."<<endl;
	cout<<"namespace\nLos espacios de nombres (namespace) de C++ permiten declarar identificadores sin que �stos se solapen, indiscriminadamente, con los declarados en otras zonas de c�digo."<<endl;
	cout<<"new\nUna expresi�n de asignaci�n que contiene el operador new se utiliza para buscar almacenamiento en el almac�n libre para el objeto que se est� creando. La nueva expresi�n devuelve un puntero al objeto creado y se puede utilizar para inicializar el objeto."<<endl;
	cout<<"operator\\nLos operadores son s�mbolos (o palabras) que representan y ejecutan una operaci�n en C++."<<endl;
	cout<<"private\nCuando precede a una lista de miembros de clase, la palabra clave private especifica que esos miembros son accesibles solo desde funciones miembro y friend de la clase"<<endl;
	cout<<"protected\nCuando precede al nombre de una clase base, la palabra clave protected especifica que los miembros p�blicos y protegidos de la clase base son miembros protegidos de sus clases derivadas."<<endl;
	cout<<"public\npublic (C++) Cuando precede a una lista de miembros de clase, la palabra clave public especifica que esos miembros son accesibles desde cualquier funci�n. "<<endl;
	cout<<"register\nLos registros permiten almacenar un conjunto de datos bajo un mismo nombre. Tambi�n conocidos como estructuras, fueron el primer indicio de lo que posteriormente entender�amos como orientaci�n a objetos en C++."<<endl;
	cout<<"reinterpret_cast\nPermite que cualquier puntero se convierta en cualquier otro tipo de puntero. Tambi�n permite convertir cualquier tipo entero en cualquier tipo de puntero y viceversa."<<endl;
	cout<<"return\nFinaliza la ejecuci�n de una funci�n y devuelve el control a la funci�n de llamada (o al sistema operativo si se transfiere el control de la funci�n main )."<<endl;
	cout<<"short\n� short � y � long �: Modifica el tama�o en bits del entero. Existen por tanto tres tipos de enteros: � int �, � short int � (que se puede abreviar como � short �), y � long int � (que se puede abreviar como � long �)."<<endl;
	cout<<"signed\nEl modificador de tipo signed define que el valor de una variable num�rica puede ser positivo o negativo."<<endl;
	cout<<"sizeof\nEl operador sizeof proporciona la cantidad de almacenamiento, en bytes, necesaria para almacenar un objeto del tipo del operando."<<endl;
	cout<<"static\nAl interior de la definici�n de una clase se utiliza la palabra reservada static para declarar miembros de la clase que no est�n ligados a ninguna instancia (objeto) de la misma."<<endl;
	cout<<"static_cast\nEl operador static_cast convierte la variable j en un tipo float ."<<endl;
	cout<<"struct\nLas clases y los structs son las construcciones con las que define sus propios tipos. "<<endl;
	cout<<"switch\nUna instrucci�n switch hace que el control se transfiera a una instrucci�n labeled-statement en el cuerpo de la instrucci�n, en funci�n del valor de condition ."<<endl;
	cout<<"template\nLos templates de funci�n son planos y no c�digo real de C++, consumidos por el compilador para generar el c�digo pertinente en funci�n de las llamadas que se hacen a la funci�n."<<endl;
	cout<<"this\nEl puntero this es una variable predefinida para todas las funciones u operadores miembro de una clase. Este puntero contiene la direcci�n del objeto concreto de la clase al que se est� aplicando la funci�n o el operador miembro. "<<endl;
	cout<<"throw\nUna expresi�n throw indica que se ha producido una condici�n excepcional, a menudo un error, en un bloque try ."<<endl;
	cout<<"try\nUtilice un bloque try para indicar qu� �reas del programa pueden generar excepciones que desee manejar inmediatamente."<<endl;
	cout<<"typedef\nLos nombres de typedef permiten encapsular detalles de la implementaci�n que pueden cambiar. "<<endl;
	cout<<"typeid\ntypeid se usa para obtener Type para un tipo en tiempo de compilaci�n."<<endl;
	cout<<"typename\nn las definiciones de plantilla, typename proporciona una sugerencia al compilador de que un identificador desconocido es un tipo."<<endl;
	cout<<"union\nLas uniones proporcionan una forma de manipular diferentes clases de datos dentro de una sola �rea de almacenamiento. "<<endl;
	cout<<"unsigned\nUNSIGNED significa que solo permite positivos. Si usas UNSIGNED no se guarda el signo. El signo ocupa un byte, as� que al no guardarlo, tienes un byte m�s disponible para guardar m�s n�meros."<<endl;
	cout<<"using\nUna directiva using proporciona acceso a todos los calificadores de espacio de nombres y al operador de �mbito. "<<endl;
	cout<<"virtual\nUna funci�n virtual es una funci�n miembro que se espera volver a definir en clases derivadas."<<endl;
	cout<<"void\nCuando se usa como un tipo de valor devuelto de funci�n, la palabra clave void especifica que la funci�n no devuelve ning�n valor."<<endl;
	cout<<"volatile\nSi un nombre se declara como volatile , el compilador recarga el valor de la memoria cada vez que el programa tiene acceso al mismo."<<endl;
	cout<<"while\nPuede utilizar la sentencia while para repetir un conjunto de operaciones hasta que se cumpla la condici�n especificada. La sentencia while utilizada en el Lenguaje de pol�ticas de Impact es la misma que la utilizada en lenguajes de programaci�n tales como C, C++ y Java."<<endl;
	
	
	return 0;
}
