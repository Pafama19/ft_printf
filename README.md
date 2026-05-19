*Este proyecto ha sido creado como parte del currículo de 42 por pabfajar*

**DESCRIPCIÓN**

El presente proyecto ft_printf consiste en crear una versión propia de la función printf incluida en la librería stdio. A parte de la librería, se ha creado también un archivo Makefile con las instrucciones necesarias para compilar y ejecutar la librería. Este proyecto nos introduce al concepto de la funciones variádicas, que son aquellas que pueden tener un número variable de argumentos de entrada. 

**INSTRUCCIÓNES**

Como se ha mencionado anteriromente, el proyecto incluye un Makefile con las instrucciones de compilación. Para compilar toda la librería se utiliza el comando "make", esto compila todas las funciones y crea la librería. Los flags utilizados para la compilación son -Wall -Wextra -Werror, si se quiere compilar una función de forma independiente se debe usar "cc -c <flags>". Para eliminar los archivos .o resultantes de la compilación se debe utilizar "make clean". Si lo que se quiere es eliminarlo todo (librería y archivos .o) se debe hacer uso del comando "make fclean". Se utilizará el comando "make re" para borrar la librería y volver a compilarla de forma inmediata.

Los especificadores de formato son los siguientes:

%c: Si se quiere imprimir un carácter.

%s: Si se quiere imprimir una cadena de caracteres.

%p: Si se quiere imprimir la dirección de memoria a la que apunta un puntero.

%d y %i: Si se quiere imprimir un número en base decimal con signo.

%u: Si se quiere imprimir un número con base decimal sin signo.

%x y %X: Si se quiere imprimir un número con base hexadecimal en minúsculas y mayúsculas respectivamente.

%%: Si se quiere imprimir el carácter literal de percentaje.

**RECURSOS**

La documentación utilizada para la elaboración del presente proyecto ha sido el subject disponible en la intra de 42, además de varios README elaborados por otros compañeros que se pueden encontrar en github. El uso de la ia ha sido en su mayoría para localización de errores y explicación del funcionamiento de las funciones variádicas, en ningún caso se le ha pedido la generación de código.

**DRECIPCIÓN DE LA LIBRERÍA**

La librería elaborada para el proyecto está compuesta por las siguientes funciones: ft_printf, t_printchar, ft_printptr, ft_printstr, ft_printintdec, ft_printunsigneddec, ft_printhexnum. La primera de todas corresponde a la función principal del proyecto, encargada de recibir los argumentos, procesarlos y devolver el entero correspondiente, el resto son funciones creadas para realizar las operaciones pertinentes para cada uno de los descriptores de formato que se piden en el subject del proyecto.