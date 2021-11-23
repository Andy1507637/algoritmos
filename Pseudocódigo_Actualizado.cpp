#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    //Declaramos constantes para manejo de valores auxiliares
    const string usuario_administrador = "IDdelAdministrador";
    const string usuario_vendedor = "IDdelVendedor";
    const string usuario_cliente = "IDdelCliente";
    const string pwd_administrador = "Password1";
    const string pwd_vendedor = "Password2";
    const string pwd_cliente = "Password3";
    const string linea_blanco_100 = "";
    const string linea_blanco_65 = "";
    const int numero_intentos = 3;

    //Declaramos variables de entrada y salida
    string opcion_str, id, password, Nombre_producto[25], Descripcion_producto[25], Ubicacion_producto[25], Destino_producto[25], Nombre_vendedor="John Connor", Celular_vendedor="662 159 6842", Nombre_cliente="Michael Jordan", Celular_cliente="661 548 1247";
    int opcion, contador_intentos, salir, cambiar_cuenta, Instruccion, i, n=2, Ubicacion, y, Producto_elegido, Destino, Bloque_switch, Eliminar, Producto_eliminado[25], regresar, Ajustes;
    float Precio_producto[25], Distancia_envio[25], Precio_total[25];
    double Costo_kilometro=0.25, Costo_envio[25], Carrito;
    


    //Todo el código se va a repetir hasta que el usuario indique que quiere detenerse
    Algoritmo Tienda
    Hacer
    {
        //Datos de prueba
        Nombre_producto[1] <- "Television"
        Precio_producto[1] <- 6700
        Descripcion_producto[1] <- "\nPantalla plana de calidad 4k."
        Ubicacion_producto[1] <- "Ubicacion_1"

        Nombre_producto[2] <- "Celular"
        Precio_producto[2] <- 3400
        Descripcion_producto[2] <- "\nCelular seminuevo de 6.5 pulgadas."
        Ubicacion_producto[2] <- "Ubicacion_3"
        


        Hacer
        {
        //vamos a desplegar el menu principal, entonces primero limpiamos la pantalla
        system("cls")
        //Hacemos primera linea del marco
        Escribir "           ", char(201)
        Para int i=1 Hasta i<=100 Con Paso 1 Hacer
        {
            Escribir char(205)
        } FinPara
        Escribir char(187), endl
        //Y ahora hacemos 3 lineas hacia abajo
        Para int i=1 Hasta i<=3 Con Paso 1 Hacer
        {
            Escribir "           ", char(186), "                                                                                                    ", linea_blanco_100 << char(186), endl
        } FinPara
        //Ponemos las opciones
        Escribir "           ", char(186), "                                       01 Acceder como administrador                                ", linea_blanco_65 << char(186), endl
        Escribir "           ", char(186), "                                       02 Acceder como vendedor                                     ", linea_blanco_65, char(186), endl
        Escribir "           ", char(186), "                                       03 Acceder como cliente                                      ", linea_blanco_65, char(186), endl
        Escribir "           ", char(186), "                                       04 Salir del programa                                        ", linea_blanco_65, char(186), endl

        //Y ahora hacemos 5 lineas hacia abajo
        Para int i=1 Hasta i<=5 Con Paso 1 Hacer
        {
            cout << "           " << char(186) << "                                                                                                    " << linea_blanco_100 << char(186) << endl;
        } FinPara
        //Ponemos la linea de abajo
        Escribir "           ", char(200)
        Para int i=1 Hasta i<=100 Con Paso 1 Hacer
        {
            Escribir char(205)
        } FinPara
        Escribir char(188), endl

        //Pedimos la opcion al usuario, la copturamos como string para no tener problemas
        Escribir "                       Opcion "
        Leer opcion_str

        //Cambiamos de string a entero
        opcion <- atoi(opcion_str.c_str())

        //Y utilizamos un switch para ejecutar las diferentes opciones
        Segun opcion Hacer
        {
            caso 1:
                contador_intentos <- 0 //Inicio de sesion del administrador
                Escribir "Login administrador", endl
                Hacer
                {
                    Escribir "Usuario :"
                    Leer id
                    Escribir "Contraseña :"
                    Leer password
                    contador_intentos <- contador_intentos+1
                } Mientras id != usuario_administrador, password != pwd_administrador y contador_intentos<numero_intentos
                Si id != usuario_administrador y password != pwd_administrador Entonces
                {
                    Escribir "Lo siento no tienes las credenciales correctas", endl
                }
                SiNo
                {
                    Escribir "Si pudiste entrar como administrador", endl
                }FinSi

                Hacer{ //Se le muestra un menú al usuario para las diferentes acciones que puede hacer
                Escribir "           ", char(201)
                    Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                        {
                            Escribir char(205)
                        }FinPara
                    Escribir char(187), endl                    

                    Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                    {
                        Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                    }FinPara

                    
                    Escribir "           ", char(186), "            01 Para ver publicaciones             ", linea_blanco_65, char(186), endl
                    Escribir "           ", char(186), "            02 Para ver compradores               ", linea_blanco_65, char(186), endl
                    Escribir "           ", char(186), "            03 Cambiar costo por envio            ", linea_blanco_65, char(186), endl
                    

                    Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                    {
                        Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                    }FinPara

                    Escribir "           ", char(200)
                    Para int i=1 Hacer i<=50 Con Paso 1 Hacer
                    {
                        Escribir char(205)
                    }
                    Escribir char(188), endl

                    
                    Escribir "                       Opcion ";
                    Leer opcion
                    
                    //Utilizamos un switch para ejecutar el comando seleccionado
                    Segun opcion
                    {
                        caso 1: //Se le muestra la información de las publicaciones y vendedores
                            i<-1
                            y<-1
                    
                            Para int x=0 Hasta x<n Con Paso 1 Hacer
                            {
                                Para int i=1 Hasta i<=100 Con Paso 1 Hacer
                                {
                                    Escribir char(205)
                                }FinPara
                                Escribir endl

                                Si Producto_eliminado[i]==1 Entonces
                                {
                                    Escribir "[PRODUCTO ELIMINADO]", endl
                                }FinSi
                                Escribir "El vendedor es: ", Nombre_vendedor, endl
                                Escribir "Celular del vendedor: ", Celular_vendedor, endl
                                Escribir endl
                                Escribir "Producto ", y, ": ", Nombre_producto[i], endl
                                Escribir "Precio: $", Precio_producto[i], endl
                                Escribir Descripcion_producto[i], endl
                                Escribir endl
                                Escribir Ubicacion_producto[i], endl
                                Escribir endl
                                Escribir "ID de publicacion: ", i, endl

                                i<-i+1
                                y<-y+1

                                
                                Para int i=1 Hasta i<=100 Con Paso 1 Hacer
                                {
                                    Escribir char(205);
                                } FinPara
                                Escribir endl;
                                
                        
                            }FinPara

                            
                            system("pause")
                            Escribir "           ", char(201)
                            Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                            {
                                Escribir char(205)
                            } FinPara
                            Escribir char(187), endl                    

                            Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                            {
                                Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                            } FinPara

                    
                            Escribir "           ", char(186), "           01 Para eliminar publicacion           ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "           02 Para salir                          ", linea_blanco_65, char(186), endl
                            
                    

                            Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                            {
                                Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                            } FinPara

                            Escribir "           ", char(200)
                            Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                            {
                                Escribir char(205)
                            } FinPara
                            Escribir char(188), endl

                            Escribir "                       Opcion "
                            Leer opcion

                            Si opcion==1 Entonces //Permite al administrador bloquear algún producto
                            {
                                Escribir "Ingrese el ID de la publicacion a eliminar: "
                                Leer Eliminar
                                i<-Eliminar
                                Producto_eliminado[i]<-1
                                Escribir "El producto ha sido eliminado con exito", endl

                            } FinSi

                            FinCaso1
                        caso 2: //Se le muestra la información de los clientes
                            Escribir endl
                            Escribir "Usario registrado: ", Nombre_cliente, endl
                            Escribir "Celular cliente: ", Celular_cliente, endl
                            Escribir endl
                            FinCaso2
                        caso 3: //Cambia el precio por kilometro de los envíos
                            Escribir endl
                            Escribir "Precio por kilometro actual es: $", Costo_kilometro, endl
                            Escribir "Introduzca el nuevo precio por kilometro: $"
                            Escribir Costo_kilometro
                            Escribir endl
                            Escribir "El costo por kilometro ha cambiado a $", Costo_kilometro, endl
                            Escribir endl
                            FinCaso3
                        De Otro Modo:
                            cout << "Por favor da una opcion valida (1, 2 o 3)"<<endl
                    }FinSegun
                    
                    system("pause")
                    Escribir "           ", char(201) //Se ofrece regresar al menu del administrador
                            Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                            {
                                Escribir char(205)
                            } FinPara
                            Escribir char(187), endl                    

                            Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                            {
                                Escribir"           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                            } FinPara

                            Escribir "           ", char(186), "        Volver al menu del administrador?         ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "                                                  ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "                      01 Si                       ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "                      02 No                       ", linea_blanco_65, char(186), endl
                            
                    

                            Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                            {
                                Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                            } FinPara

                            Escribir "           ", char(200)
                            Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                            {
                                Escribir char(205)
                            } FinPara
                            Escribir char(188), endl

                            Escribir "                       Regresar? "
                            Leer regresar
                            system("cls")
                    
                }Mientras regresar==1



                FinCaso1
            caso 2: //Inicia sesión como vendedor
                contador_intentos <- 0
                Escribir "Login vendedor", endl
                Hacer 
                {
                    Escribir "Usuario :"
                    Leer id
                    Escribir "Contraseña :"
                    Leer password
                    contador_intentos <- contador_intentos+1
                } Mientras id != usuario_vendedor, password != pwd_vendedor y contador_intentos<numero_intentos
                Si id != usuario_vendedor y password != pwd_vendedor Entonces
                {
                    Escribir "Lo siento no tienes las credenciales correctas", endl
                } FinSi
                SiNo
                {
                    Escribir "Si pudiste entrar como vendedor", endl
                    

                    Hacer{ //Se le muestra el menú principal del vendedor
                    Escribir "           ", char(201)
                    Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                        {
                            Escribir char(205)
                        } FinPara
                    Escribir char(187), endl                    

                    Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                    {
                        Escribir"           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                    } FinPara

                    
                    Escribir "           ", char(186), "       01 Para ver sus productos en venta         ", linea_blanco_65, char(186), endl
                    Escribir "           ", char(186), "       02 Publicar nuevos productos               ", linea_blanco_65, char(186), endl
                    Escribir "           ", char(186), "       03 Ajustes de cuenta                       ", linea_blanco_65, char(186), endl

                    

                    Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                    {
                        Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                    } FinPara

                    Escribir "           ", char(200)
                    Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                    {
                        Escribir char(205)
                    } FinPara
                    Escribir char(188), endl

                    Escribir "                       Opcion "
                    Leer opcion //Se lee la instrucción


                    

                    
                
                Si opcion == 1 Entonces //Se utilizan condicionales para determinar la acción
                {
                    i<-1
                    
                    Para int x=0 Hasta x<n Con Paso 1 Hacer
                    {
                        Para int i=1 Hasta i<=100 Con Paso 1 Hacer
                        {
                            Escribir char(205)
                        } FinPara
                        Escribir endl

                        Si Producto_eliminado[i]==1 Entonces //En caso de que el administrador haya bloqueado alguna publicación se mostrará este mensaje
                                {
                                    Escribir "[PRODUCTO ELIMINADO POR UN ADMINISTRADOR]", endl
                                } FinSi

                        Escribir "Producto: ", Nombre_producto[i], endl
                        Escribir "Precio: $", Precio_producto[i], endl
                        Escribir Descripcion_producto[i], endl
                        Escribir endl
                        Escribir Ubicacion_producto[i], endl
                        
                        i<-i+1

                        //cout << "           "<<char(200);
                        Para int i=1 Hasta i<=100 Con Paso 1 Hacer
                        {
                            Escribir char(205)
                        } FinPara
                        cout << endl;
                        
                        
                    } FinPara
                    
                }
                SiNo
                {
                    Si opcion==2 Entonces { //Publica un nuevo producto
                    i<-n+1               
                    Escribir endl, "Introduzca el nombre del producto: "
                    Leer Nombre_producto[i]
                    Escribir endl, "Introduzca el precio del producto: $"
                    Leer Precio_producto[i]
                    Escribir endl, "Introduzca una breve descripcion del producto (Puede dar enter, introduzca un asterisco cuando termine '*'): ", endl
                    getline(cin, Descripcion_producto[i],'*');

                    Escribir endl, "Seleccione la ubicacion mas cercana al producto:", endl //Se pide seleccionar una ubicación
                    Escribir "           ", char(201)
                    Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                        {
                            Escribir char(205)
                        } FinPara
                    Escribir char(187), endl                    

                    Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                    {
                        Escribir "           ", char(186), "                                                  ",linea_blanco_100, char(186), endl
                    } FinPara

                    
                    Escribir "           ", char(186), "                  01 Ubicacion 1                  ", linea_blanco_65, char(186), endl
                    Escribir "           ", char(186), "                  02 Ubicacion 2                  ", linea_blanco_65, char(186), endl
                    Escribir "           ", char(186), "                  03 Ubicacion 3                  ", linea_blanco_65, char(186), endl

                    n<-n+1

                    Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                    {
                        Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                    } FinPara

                    Escribir "           ", char(200)
                    Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                        {
                            Escribir char(205)
                        } FinPara
                    Escribir char(188), endl

                    Escribir "                       Ubicacion "
                    Leer Ubicacion

                    Segun Ubicacion //Información utilizada para el cálculo de costos de envio
                    {
                        caso 1:
                            Ubicacion_producto[i] <- "Ubicacion_1"
                            FinCaso1
                        caso 2:
                            Ubicacion_producto[i] <- "Ubicacion_2"
                            FinCaso2
                        caso 3:
                            Ubicacion_producto[i] <- "Ubicacion_3"
                            FinCaso3
                        De Otro Modo:
                            Escribir "Ingrese una ubicacion valida "
                            FinDeOtroModo;
                    } FinSegun

                    system("cls")
                    Escribir "El producto se ha publicado\n"
                    Para int i=1 Hasta i<=100 Con Paso 1 Hacer
                        {
                            Escribir char(205)
                        } FinPara
                        Escribir endl

                        Si Producto_eliminado[i]==1
                                {
                                    Escribir "[PRODUCTO ELIMINADO POR UN ADMINISTRADOR]", endl
                                }FinSi

                        Escribir "Producto: ", Nombre_producto[i], endl
                        Escribir "Precio: $", Precio_producto[i], endl
                        Escribir Descripcion_producto[i], endl
                        Escribir endl
                        Escribir Ubicacion_producto[i], endl
                        
                        i<-i+1

                        
                        Para int i=1 Hasta i<=100 Con Paso 1 Hacer
                        {
                            cout << char(205);
                        } FinPara
                        Escribir endl

                }FinSi
                SiNo{
                    Si opcion==3 Entonces //Se muestra menú de los ajustes de la cuenta
                    {
                    system("cls")
                    Escribir "           ", char(201)
                            Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                            {
                                Escribir char(205)
                            } FinPara
                            Escribir char(187), endl                    

                            Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                            {
                                Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                            } FinPara

                            
                            Escribir "           ", char(186), "         01 Cambiar nombre                        ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "         02 Cambiar celular de contacto           ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "         03 Regresar                              ", linea_blanco_65, char(186), endl
                    

                            Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                            {
                                Escribir "           " << char(186) << "                                                  " << linea_blanco_100 << char(186) << endl;
                            } FinPara

                            Escribir "           ", char(200)
                            Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                            {
                                Escribir char(205)
                            } FinPara
                            Escribir char(188), endl

                            Escribir "                       Cambiar? "
                            Leer Ajustes //Se lee la indicación
                            system("cls")

                            Si Ajustes==1 Entonces //Se le permite cambiar el nombre de la cuenta
                            {
                                Escribir "Tu nombre actual es: ", Nombre_vendedor, endl
                                Escribir "Introduce tu nuevo nombre (Escriba asterisco '*' cuando termine): "
                                 getline(Leer Nombre_vendedor)
                                Escribir endl, "Tu nombre ha cambiado a ", Nombre_vendedor, endl
                            }
                            SiNo
                            {
                                Si Ajustes==2 Entonces //Se le permite cambiar el celular de contacto
                                    {
                                        Escribir "Tu celular de contacto actual es: ", Celular_vendedor, endl
                                        Escribir "Introduce tu nuevo celular (Escriba asterisco '*' cuando termine): "
                                        getline(Leer Celular_vendedor)
                                        Escribir endl, "Tu celular ha cambiado a ", Celular_vendedor, endl
                                    } FinSi
                                SiNo
                                {
                                    Escribir "Regresando..."
                                } FinSi
                            } FinSi
                } FinSi
                } FinSi
                } FinSi
                
                system("pause")
                    Escribir "           ", char(201) //Se le ofrece volver al menú del vendedor
                            Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                            {
                                Escribir char(205)
                            }
                            Escribir char(187), endl                    

                            Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                            {
                                Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                            } FinPara

                            Escribir "           ", char(186), "           Volver al menu del vendedor?           ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "                                                  ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "                      01 Si                       ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "                      02 No                       ", linea_blanco_65, char(186), endl
                            
                    

                            Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                            {
                                Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                            } FinPara

                            Escribir "           ", char(200)
                            Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                            {
                                Escribir char(205)
                            } FinPara
                            Escribir char(188), endl

                            Escribir "                       Regresar? "
                            Leer regresar //Se lee la instrucción
                            system("cls")



                    
                }Mientras regresar==1
                }FinSi                
                FinCaso2
            caso 3:               
                contador_intentos <- 0 //Inicio de sesión como cliente
                Escribir "Login cliente", endl
                Hacer
                {
                    Escribir "Usuario :"
                    Leer id
                    Escribir "Contraseña :"
                    Leer password
                    contador_intentos<-contador_intentos+1
                } Mientras id != usuario_cliente, password != pwd_cliente y contador_intentos<numero_intentos
                Si id != usuario_cliente y password != pwd_cliente
                {
                    Escribir "Lo siento no tienes las credenciales correctas", endl
                }
                SiNo
                {
                    Escribir "Si pudiste entrar como cliente", endl
                    system("pause")

                Hacer{

                Escribir "           ", char(201) //Se muestra el menú principal del cliente
                            Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                            {
                                Escribir char(205)
                            } FinPara
                            Escribir char(187), endl                   

                            Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                            {
                                Escribir"           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                            } FinPara

                            
                            Escribir "           ", char(186), "             01 Ver productos en venta            ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "             02 Ajustes de cuenta                 ", linea_blanco_65, char(186), endl
                            
                    

                            Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                            {
                                Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                            } FinPara

                            Escribir "           ", char(200)
                            Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                            {
                                Escribir char(205)
                            } FinPara
                            Escribir char(188), endl

                            Escribir "                       Regresar? "
                            Leer Ajustes //Se lee la indicación
                            system("cls")
                Si Ajustes==1 Entonces{
                system("cls")
                Escribir "Estos son los productos disponibles del momento: ", endl // Se le muestran solamente los nombres de los productos en venta
                
                i<-1
                y<-1
                Para int x=0 Hasta x<n Con Paso 1 Hacer
                {
                    Para int i=1 Hasta i<=40 Con Paso 1 Hacer
                        {
                            Escribir char(205)
                        } FinPara
                        Escribir endl
                    Si Producto_eliminado[i]==1 Entonces //Si un producto ha sido boqueado por un administrador se mostrará el mensaje en lugar del nombre del producto
                            {
                                Escribir "[PRODUCTO NO DISPONIBLE]", endl
                            } FinSi
                    SiNo{
                    Escribir "Producto ", y, ": ", Nombre_producto[i], endl;}FinSi
                    y=y+1
                    i=i+1
                    
                    Para int i=1 Hasta i<=40 Con Paso 1 Hacer
                        {
                            Escribir char(205)
                        } FinPara
                        Escribir endl
                } FinPara

                Escribir "Eliga el numero de un producto para ver mas informacion: " //El usuario puede elegir el número de uno de los producto para ver más detalles
                Leer Producto_elegido
                Si Producto_elegido<=n Entonces
                {
                    i <- Producto_elegido //Se le muestran todos los detalles del producto
                    Para int i=1 Hasta i<=100 Con Paso 1
                    {
                        Escribir char(205)
                    } FinPara
                    Escribir endl

                    Si Producto_eliminado[i]==1 Entonces
                                {
                                    Escribir "[PRODUCTO NO DISPONIBLE]", endl
                                } FinSi

                    Escribir "Producto: ", Nombre_producto[i], endl
                    Escribir "Precio: $", Precio_producto[i], endl
                    Escribir Descripcion_producto[i], endl
                    Escribir endl
                    Escribir Ubicacion_producto[i], endl
                        
                    
                    
                    Para int i=1 Hasta i<=100 Con Paso 1 Hacer
                    {
                        Escribir char(205)
                    } FinPara
                    Escribir endl

                    system("pause")

                    Escribir "           ", char(201) //Se muestra un segundo menú al cliente respecto al producto que visualiza
                    Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                        {
                            Escribir char(205)
                        } FinPara
                    Escribir char(187), endl                    

                    Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                    {
                        Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                    } FinPara

                    
                    Escribir "           ", char(186), "     01 Para calcular costos de envio             ", linea_blanco_65, char(186), endl
                    Escribir "           ", char(186), "     02 Para obtener contacto del vendedor        ", linea_blanco_65, char(186), endl
                    Escribir "           ", char(186), "     03 Salir                                     ", linea_blanco_65, char(186), endl

                    

                    Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                    {
                        Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                    } FinPara

                    Escribir "           ", char(200)
                    Para int i=1 Hasta i<=50 Con Paso 1 Hacer 
                        {
                            Escribir char(205)
                        } FinPara
                    Escribir char(188), endl

                    Escribir "                       Opcion "
                    Leer opcion //Se lee la indicación

                    system("cls")

                    Segun opcion
                    {
                        caso 1: //Se le permite calcular costos de envío
                            Escribir "Seleccione el destino mas cercano a usted", endl
                            Escribir "           ", char(201)
                            Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                                {
                                    Escribir char(205)
                                } FinPara
                            Escribir char(187), endl                    

                            Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                            {
                                Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                            } FinPara

                    
                            Escribir "           ", char(186), "                  01 Destino 1                    ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "                  02 Destino 2                    ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "                  03 Destino 3                    ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "                  04 Destino 4                    ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "                  05 Destino 5                    ", linea_blanco_65, char(186), endl

                        

                            Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                            {
                                Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                            } FinPara

                            Escribir "           ", char(200)
                            Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                                {
                                    Escribir char(205)
                                } FinPara
                            Escribir char(188), endl

                            Escribir "                       Destino "
                            Leer Destino //Se lee el destino seleccionado
                            
                            Si Ubicacion_producto[i]=="Ubicacion_1" Entonces
                            {
                                Bloque_switch <- 1
                            } 
                            SiNo
                            {
                                Si Ubicacion_producto[i]=="Ubicacion_2" Entonces
                                {
                                    Bloque_switch <- 2
                                }
                                SiNo
                                {
                                    Bloque_switch <- 3
                                }
                            }FinSi

                            Segun Bloque_switch //Se realiza el cálculo de kilometros que tomará el viaje
                            {
                                caso 1:
                                    Segun Destino
                                    {
                                        caso 1:
                                            Destino_producto[i] <- "Destino_1"
                                            Distancia_envio[i] <- 3240
                                            FinCaso1
                                        caso 2:
                                            Destino_producto[i] <- "Destino_2"
                                            Distancia_envio[i] <- 4651
                                            FinCaso2
                                        caso 3:
                                            Destino_producto[i] <- "Destino_3"
                                            Distancia_envio[i] <- 2074
                                            FinCaso3
                                        caso 4:
                                            Destino_producto[i] <- "Destino_4"
                                            Distancia_envio[i] <- 6001
                                            FinCaso4
                                        caso 5:
                                            Destino_producto[i] <- "Destino_5"
                                            Distancia_envio[i] <- 7012
                                            FinCaso5
                                        caso 6:
                                            Destino_producto[i] <- "Destino_6"
                                            Distancia_envio[i] <- 1945
                                            FinCaso6
                                        De Otro Modo
                                            Escribir "Por favor da una opcion valida (1, 2, 3, 4 o 5)", endl
                                    }
                                    FinCaso1
                                caso 2:
                                    Segun Destino
                                    {
                                        caso 1:
                                            Destino_producto[i] <- "Destino_1"
                                            Distancia_envio[i] <- 3630
                                            FinCaso1
                                        caso 2:
                                            Destino_producto[i] <- "Destino_2"
                                            Distancia_envio[i] <- 4441
                                            FinCaso2
                                        caso 3:
                                            Destino_producto[i] <- "Destino_3"
                                            Distancia_envio[i] <- 2010
                                            FinCaso3
                                        caso 4:
                                            Destino_producto[i] <- "Destino_4"
                                            Distancia_envio[i] <- 4201
                                            FinCaso4
                                        caso 5:
                                            Destino_producto[i] <- "Destino_5"
                                            Distancia_envio[i] <- 7622
                                            FinCaso5
                                        caso 6:
                                            Destino_producto[i] <- "Destino_6"
                                            Distancia_envio[i] <- 1985
                                            FinCaso6
                                        De Otro Modo:
                                            Escribir "Por favor da una opcion valida (1, 2, 3, 4 o 5)", endl
                                    }
                                    FinCaso2
                                caso 3:
                                    Segun Destino
                                    {
                                        caso 1:
                                            Destino_producto[i] <- "Destino_1"
                                            Distancia_envio[i] <- 3410
                                            FinCaso1
                                        caso 2:
                                            Destino_producto[i] <- "Destino_2"
                                            Distancia_envio[i] <- 2651
                                            FinCaso2
                                        caso 3:
                                            Destino_producto[i] <- "Destino_3"
                                            Distancia_envio[i] <- 2074
                                            FinCaso3
                                        caso 4:
                                            Destino_producto[i] <- "Destino_4"
                                            Distancia_envio[i] <- 3411
                                            FinCaso4
                                        caso 5:
                                            Destino_producto[i] <- "Destino_5"
                                            Distancia_envio[i] <- 7152
                                            FinCaso5
                                        caso 6:
                                            Destino_producto[i] <- "Destino_6"
                                            Distancia_envio[i] <- 4245
                                            FinCaso6
                                        De Otro Modo:
                                            Escribir "Por favor da una opcion valida (1, 2, 3, 4 o 5)", endl
                                    }FinSegun
                                    FinCaso3
                                De Otro Modo:
                                    Escribir "Por favor da una opcion valida (1, 2 o 3)", endl
                            }FinSegun
                            //Se realiza el cálculo de el costo de envío y costo total
                            Escribir endl, "El producto viajara de ", Ubicacion_producto[i], " hasta ", Destino_producto[i], endl
                            Escribir "Recorriendo un total de ", Distancia_envio[i], " kilometros ", endl
                            Costo_envio[i] <- Distancia_envio[i]*Costo_kilometro 
                            Escribi "Con un coste por kilometro de $", Costo_kilometro, ", el envio costara: $", Costo_envio[i], endl
                            Precio_total[i] <- Costo_envio[i]+Precio_producto[i]
                            Escribir "El precio total por el producto sera de: $", Precio_total[i], endl
                            Escribir endl
                            system("pause")


                            Escribir "           ", char(201) //Se le muestra un tercer menú, con más opciones
                            Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                                {
                                    Escribir char(205)
                                } FinPara
                            Escribir char(187), endl                    

                            Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                            {
                                Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                            } FinPara

                    
                            Escribir "           ", char(186), "     01 Para obtener contacto del vendedor        ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "     02 Agregar al carrito                        ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "     03 Salir                                     ", linea_blanco_65, char(186), endl
                    

                            Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                            {
                                Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                            } FinPara

                            Escribir "           ", char(200)
                            Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                            {
                                Escribir char(205)
                            } FinPara
                            Escribir char(188), endl

                            Escribir "                       Opcion "
                            Leer opcion //Se lee la instrucción

                            Si opcion==1 Entonces //Se le muestra la información del vendedor
                            {
                                Escritorio endl
                                Escritorio "El vendedor es: ", Nombre_vendedor, endl
                                Escritorio "Su celular es: ", Celular_vendedor, endl
                                Escritorio endl
                            }
                            SiNo{
                                Si opcion==2 Entonces //Se agrega el producto seleccionado al carrito, permitiendole seguir buscando otros productos
                                {
                                    Carrito <- Carrito + Precio_total[i]
                                    Escribir endl
                                    Escribir "Producto agregado al carrito", endl
                                    Escribir "carrito actual: ", Carrito, endl
                                    Escribir endl
                                }FinSi
                            } FinSi
                            

                            FinCaso1
                        caso 2: //Se le muestra la información del vendedor
                            Escribir endl
                            Escribir "El vendedor es: ", Nombre_vendedor, endl
                            Escribir "Su celular es: ", Celular_vendedor, endl
                            Escribir endl
                            FinCaso2;
                        caso 3:
                            FinCaso3
                        default:
                            Escribir "Por favor da una opcion valida (1, 2 o 3)", endl
                    }FinSegun
                }FinSi
                }
                SiNo
                {
                    system("cls") //Se le muestra el menú de ajustes
                    
                    Escribir "           ", char(201)
                            Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                            {
                                Escribir char(205)
                            } FinPara
                            Escribir char(187), endl                    

                            Para int i=1 Hasa i<=3 Con Paso 1 Hacer
                            {
                                Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                            } FinPara

                            
                            Escribir "           ", char(186), "         01 Cambiar nombre                        ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "         02 Cambiar celular de contacto           ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "         03 Regresar                              ", linea_blanco_65, char(186), endl
                    

                            Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                            {
                                Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                            } FinPara

                            Escribir "           ", char(200)
                            Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                            {
                                Escribir char(205)
                            } FinPara
                            Escribir char(188), endl

                            Escribir "                       Cambiar? "
                            Leer Ajustes //Se lee la opcion elegida
                            system("cls")

                            Si Ajustes==1 Entonces //Se le permite cambiar de nombre
                            {
                                Escribir "Tu nombre actual es: ", Nombre_cliente, endl
                                Escribir "Introduce tu nuevo nombre (Escriba asterisco '*' cuando termine): "
                                 getline(Leer Nombre_cliente)
                                Escribir endl, "Tu nombre ha cambiado a ", Nombre_cliente, endl
                            }
                            SiNo
                            {
                                Si Ajustes==2 Entonces //Se le permite cambiar su celular de contacto
                                    {
                                        Escribir "Tu celular de contacto actual es: ", Celular_cliente, endl
                                        Escribir "Introduce tu nuevo celular (Escriba asterisco '*' cuando termine): "
                                        getline(Leer Celular_cliente)
                                        Escribir endl, "Tu celular ha cambiado a ", Celular_cliente, endl
                                    }
                                SiNo
                                {
                                    Escribir "Regresando..."
                                }FinSi
                            }FinSi
                }FinSi
                system("pause")
                    Escribir "           ", char(201) //Se le ofrece continuar buscando más productos
                            Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                            {
                                Escribir char(205)
                            } FinPara
                            Escribir char(187), endl                    

                            Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                            {
                                Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                            } FinPara

                            Escribir "           ", char(186), "               Continuar buscando?                ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "                                                  ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "                      01 Si                       ", linea_blanco_65, char(186), endl
                            Escribir "           ", char(186), "                      02 No                       ", linea_blanco_65, char(186), endl
                            
                    

                            Para int i=1 Hasta i<=3 Con Paso 1 Hacer
                            {
                                Escribir "           ", char(186), "                                                  ", linea_blanco_100, char(186), endl
                            } FinPara

                            Escribir "           ", char(200)
                            Para int i=1 Hasta i<=50 Con Paso 1 Hacer
                            {
                                Escribir char(205)
                            } FinPara
                            Escribir char(188), endl

                            Escribir "                       Regresar? "
                            Leer regresar //Se lee la opcion
                            system("cls")



                    
                }Mientras regresar==1
                }FinSi
                
                FinCaso3
            caso 4: //El programa cierra
                Escribir "Vamos a salir", endl
                system("pause")
                system("cls")
                FinCaso4
                salir<-1
            De Otro Modo:
                Escribir "Por favor da una opcion valida (1, 2, 3 o 4)", endl
        }FinSegun
        Escribir "Desea cambiar de cuenta? \n 1 -> Si \n 2 -> No", endl
        Leer cambiar_cuenta
        }Mientras cambiar_cuenta==1
    }   
    Mientras salir==1

   return 0;
}
FinAlgoritmo //Fin del programa