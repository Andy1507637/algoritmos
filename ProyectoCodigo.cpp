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
    do
    {

        //Datos de prueba
        Nombre_producto[1]= "Television";
        Precio_producto[1]= 6700;
        Descripcion_producto[1]="\nPantalla plana de calidad 4k.";
        Ubicacion_producto[1]="Ubicacion_1";

        Nombre_producto[2]= "Celular";
        Precio_producto[2]= 3400;
        Descripcion_producto[2]="\nCelular seminuevo de 6.5 pulgadas.";
        Ubicacion_producto[2]="Ubicacion_3";
        


        do
        {
        //vamos a desplegar el menu principal, entonces primero limpiamos la pantalla
        system("cls");
        //Hacemos primera linea del marco
        cout << "           "<<char(201);
        for ( int i=1; i<=100; i++)
        {
            cout << char(205);
        }
        cout << char(187)<<endl;
        //Y ahora hacemos 3 lineas hacia abajo
        for (int i=1; i<=3; i++)
        {
            cout <<"           " << char(186) << "                                                                                                    "<< linea_blanco_100 << char(186) << endl;
        }
        //Ponemos las opciones
        cout << "           " << char(186) << "                                       01 Acceder como administrador                                " << linea_blanco_65 << char(186) << endl;
        cout << "           " << char(186) << "                                       02 Acceder como vendedor                                     " << linea_blanco_65 << char(186) << endl;
        cout << "           " << char(186) << "                                       03 Acceder como cliente                                      " << linea_blanco_65 << char(186) << endl;
        cout << "           " << char(186) << "                                       04 Salir del programa                                        " << linea_blanco_65 << char(186) << endl;

        //Y ahora hacemos 5 lineas hacia abajo
        for (int i=1; i<=5; i++)
        {
            cout << "           " << char(186) << "                                                                                                    " << linea_blanco_100 << char(186) << endl;
        }
        //Ponemos la linea de abajo
        cout << "           "<<char(200);
        for (int i=1;i<=100;i++)
        {
            cout << char(205);
        }
        cout << char(188)<<endl;

        //Pedimos la opcion al usuario, la copturamos como string para no tener problemas
        cout << "                       Opcion ";
        cin >> opcion_str;

        //Cambiamos de string a entero
        opcion = atoi(opcion_str.c_str());

        //Y utilizamos un switch para ejecutar las diferentes opciones
        switch (opcion)
        {
            case 1:
                contador_intentos = 0; //Inicio de sesion del administrador
                cout << "Login administrador"<<endl;
                do
                {
                    cout << "Usuario :";
                    cin >> id;
                    cout << "Contraseña :";
                    cin >> password;
                    contador_intentos++;
                } while ((id != usuario_administrador || password != pwd_administrador ) && contador_intentos<numero_intentos);
                if ((id != usuario_administrador && password != pwd_administrador))
                {
                    cout << "Lo siento no tienes las credenciales correctas" <<endl;
                }
                else
                {
                    cout << "Si pudiste entrar como administrador"<<endl;
                }

                do{ //Se le muestra un menú al usuario para las diferentes acciones que puede hacer
                cout << "           "<<char(201);
                    for ( int i=1; i<=50; i++)
                        {
                            cout << char(205);
                        }
                    cout << char(187)<<endl;                    

                    for (int i=1; i<=3; i++)
                    {
                        cout <<"           " << char(186) << "                                                  "<< linea_blanco_100 << char(186) << endl;
                    }

                    
                    cout << "           " << char(186) << "            01 Para ver publicaciones             " << linea_blanco_65 << char(186) << endl;
                    cout << "           " << char(186) << "            02 Para ver compradores               " << linea_blanco_65 << char(186) << endl;
                    cout << "           " << char(186) << "            03 Cambiar costo por envio            " << linea_blanco_65 << char(186) << endl;
                    

                    for (int i=1; i<=3; i++)
                    {
                        cout << "           " << char(186) << "                                                  " << linea_blanco_100 << char(186) << endl;
                    }

                    cout << "           "<<char(200);
                    for (int i=1;i<=50;i++)
                    {
                        cout << char(205);
                    }
                    cout << char(188)<<endl;

                    
                    cout << "                       Opcion ";
                    cin >> opcion;
                    
                    //Utilizamos un switch para ejecutar el comando seleccionado
                    switch(opcion)
                    {
                        case 1: //Se le muestra la información de las publicaciones y vendedores
                            i=1;
                            y=1;
                    
                            for(int x=0;x<n; x++)
                            {
                                for ( int i=1; i<=100; i++)
                                {
                                    cout << char(205);
                                }
                                cout << endl;

                                if(Producto_eliminado[i]==1)
                                {
                                    cout << "[PRODUCTO ELIMINADO]" << endl;
                                }
                                cout << "El vendedor es: " << Nombre_vendedor << endl;
                                cout << "Celular del vendedor: " << Celular_vendedor << endl;
                                cout << endl;
                                cout << "Producto " << y << ": " << Nombre_producto[i] << endl;
                                cout << "Precio: $" << Precio_producto[i] << endl;
                                cout << Descripcion_producto[i] << endl;
                                cout << endl;
                                cout << Ubicacion_producto[i] << endl;
                                cout << endl;
                                cout << "ID de publicacion: " << i << endl;

                                i=i+1;
                                y=y+1;

                                
                                for (int i=1;i<=100;i++)
                                {
                                    cout << char(205);
                                }
                                cout << endl;
                                
                        
                            }

                            
                            system("pause");
                            cout << "           "<<char(201);
                            for ( int i=1; i<=50; i++)
                            {
                                cout << char(205);
                            }
                            cout << char(187)<<endl;                    

                            for (int i=1; i<=3; i++)
                            {
                                cout <<"           " << char(186) << "                                                  "<< linea_blanco_100 << char(186) << endl;
                            }

                    
                            cout << "           " << char(186) << "           01 Para eliminar publicacion           " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "           02 Para salir                          " << linea_blanco_65 << char(186) << endl;
                            
                    

                            for (int i=1; i<=3; i++)
                            {
                                cout << "           " << char(186) << "                                                  " << linea_blanco_100 << char(186) << endl;
                            }

                            cout << "           "<<char(200);
                            for (int i=1;i<=50;i++)
                            {
                                cout << char(205);
                            }
                            cout << char(188)<<endl;

                            cout << "                       Opcion ";
                            cin >> opcion;

                            if(opcion==1) //Permite al administrador bloquear algún producto
                            {
                                cout << "Ingrese el ID de la publicacion a eliminar: ";
                                cin >> Eliminar;
                                i=Eliminar;
                                Producto_eliminado[i]=1;
                                cout << "El producto ha sido eliminado con exito" << endl;

                            }

                            break;
                        case 2: //Se le muestra la información de los clientes
                            cout << endl;
                            cout << "Usario registrado: " << Nombre_cliente << endl;
                            cout << "Celular cliente: " << Celular_cliente << endl;
                            cout << endl;
                            break;
                        case 3: //Cambia el precio por kilometro de los envíos
                            cout << endl;
                            cout << "Precio por kilometro actual es: $" << Costo_kilometro << endl;
                            cout << "Introduzca el nuevo precio por kilometro: $";
                            cin >> Costo_kilometro;
                            cout << endl;
                            cout << "El costo por kilometro ha cambiado a $" << Costo_kilometro << endl;
                            cout << endl;
                            break;
                        default:
                            cout << "Por favor da una opcion valida (1, 2 o 3)"<<endl;
                    }
                    
                    system("pause");
                    cout << "           "<<char(201); //Se ofrece regresar al menu del administrador
                            for ( int i=1; i<=50; i++)
                            {
                                cout << char(205);
                            }
                            cout << char(187)<<endl;                    

                            for (int i=1; i<=3; i++)
                            {
                                cout <<"           " << char(186) << "                                                  "<< linea_blanco_100 << char(186) << endl;
                            }

                            cout << "           " << char(186) << "        Volver al menu del administrador?         " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "                                                  " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "                      01 Si                       " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "                      02 No                       " << linea_blanco_65 << char(186) << endl;
                            
                    

                            for (int i=1; i<=3; i++)
                            {
                                cout << "           " << char(186) << "                                                  " << linea_blanco_100 << char(186) << endl;
                            }

                            cout << "           "<<char(200);
                            for (int i=1;i<=50;i++)
                            {
                                cout << char(205);
                            }
                            cout << char(188)<<endl;

                            cout << "                       Regresar? ";
                            cin >> regresar;
                            system("cls");



                    
                }while(regresar==1);



                break;
            case 2: //Inicia sesión como vendedor
                contador_intentos = 0;
                cout << "Login vendedor"<<endl;
                do
                {
                    cout << "Usuario :";
                    cin >> id;
                    cout << "Contraseña :";
                    cin >> password;
                    contador_intentos++;
                } while ((id != usuario_vendedor || password != pwd_vendedor ) && contador_intentos<numero_intentos);
                if ((id != usuario_vendedor && password != pwd_vendedor))
                {
                    cout << "Lo siento no tienes las credenciales correctas" <<endl;
                }
                else
                {
                    cout << "Si pudiste entrar como vendedor"<<endl;
                    

                    do{ //Se le muestra el menú principal del vendedor
                    cout << "           "<<char(201);
                    for ( int i=1; i<=50; i++)
                        {
                            cout << char(205);
                        }
                    cout << char(187)<<endl;                    

                    for (int i=1; i<=3; i++)
                    {
                        cout <<"           " << char(186) << "                                                  "<< linea_blanco_100 << char(186) << endl;
                    }

                    
                    cout << "           " << char(186) << "       01 Para ver sus productos en venta         " << linea_blanco_65 << char(186) << endl;
                    cout << "           " << char(186) << "       02 Publicar nuevos productos               " << linea_blanco_65 << char(186) << endl;
                    cout << "           " << char(186) << "       03 Ajustes de cuenta                       " << linea_blanco_65 << char(186) << endl;

                    

                    for (int i=1; i<=3; i++)
                    {
                        cout << "           " << char(186) << "                                                  " << linea_blanco_100 << char(186) << endl;
                    }

                    cout << "           "<<char(200);
                    for (int i=1;i<=50;i++)
                    {
                        cout << char(205);
                    }
                    cout << char(188)<<endl;

                    cout << "                       Opcion ";
                    cin >> opcion; //Se lee la instrucción


                    

                    
                
                if (opcion == 1) //Se utilizan condicionales para determinar la acción
                {
                    i=1;
                    
                    for(int x=0;x<n; x++)
                    {
                        for ( int i=1; i<=100; i++)
                        {
                            cout << char(205);
                        }
                        cout << endl;

                        if(Producto_eliminado[i]==1) //En caso de que el administrador haya bloqueado alguna publicación se mostrará este mensaje
                                {
                                    cout << "[PRODUCTO ELIMINADO POR UN ADMINISTRADOR]" << endl;
                                }

                        cout << "Producto: " << Nombre_producto[i] << endl;
                        cout << "Precio: $" << Precio_producto[i] << endl;
                        cout << Descripcion_producto[i] << endl;
                        cout << endl;
                        cout << Ubicacion_producto[i] << endl;
                        
                        i=i+1;

                        
                        for (int i=1;i<=100;i++)
                        {
                            cout << char(205);
                        }
                        cout << endl;
                        
                        
                    }
                    
                }
                else
                {
                    if(opcion==2){ //Publica un nuevo producto
                    i=n+1;                
                    cout <<endl << "Introduzca el nombre del producto: ";
                    cin >> Nombre_producto[i];
                    cout <<endl << "Introduzca el precio del producto: $";
                    cin >> Precio_producto[i];
                    cout <<endl <<"Introduzca una breve descripcion del producto (Puede dar enter, introduzca un asterisco cuando termine '*'): "<<endl;
                    getline(cin, Descripcion_producto[i],'*');

                    cout <<endl<<"Seleccione la ubicacion mas cercana al producto:" <<endl; //Se pide seleccionar una ubicación
                    cout << "           "<<char(201);
                    for ( int i=1; i<=50; i++)
                        {
                            cout << char(205);
                        }
                    cout << char(187)<<endl;                    

                    for (int i=1; i<=3; i++)
                    {
                        cout <<"           " << char(186) << "                                                  "<< linea_blanco_100 << char(186) << endl;
                    }

                    
                    cout << "           " << char(186) << "                  01 Ubicacion 1                  " << linea_blanco_65 << char(186) << endl;
                    cout << "           " << char(186) << "                  02 Ubicacion 2                  " << linea_blanco_65 << char(186) << endl;
                    cout << "           " << char(186) << "                  03 Ubicacion 3                  " << linea_blanco_65 << char(186) << endl;

                    n=n+1;

                    for (int i=1; i<=3; i++)
                    {
                        cout << "           " << char(186) << "                                                  " << linea_blanco_100 << char(186) << endl;
                    }

                    cout << "           "<<char(200);
                    for (int i=1;i<=50;i++)
                        {
                            cout << char(205);
                        }
                    cout << char(188)<<endl;

                    cout << "                       Ubicacion ";
                    cin >> Ubicacion;

                    switch(Ubicacion) //Información utilizada para el cálculo de costos de envio
                    {
                        case 1:
                            Ubicacion_producto[i] = "Ubicacion_1";
                            break;
                        case 2:
                            Ubicacion_producto[i] = "Ubicacion_2";
                            break;
                        case 3:
                            Ubicacion_producto[i] = "Ubicacion_3";
                            break;
                        default:
                            cout << "Ingrese una ubicacion valida ";
                            break;
                    }

                    system("cls");
                    cout << "El producto se ha publicado\n";
                    for ( int i=1; i<=100; i++)
                        {
                            cout << char(205);
                        }
                        cout << endl;

                        if(Producto_eliminado[i]==1)
                                {
                                    cout << "[PRODUCTO ELIMINADO POR UN ADMINISTRADOR]" << endl;
                                }

                        cout << "Producto: " << Nombre_producto[i] << endl;
                        cout << "Precio: $" << Precio_producto[i] << endl;
                        cout << Descripcion_producto[i] << endl;
                        cout << endl;
                        cout << Ubicacion_producto[i] << endl;
                        
                        i=i+1;

                        
                        for (int i=1;i<=100;i++)
                        {
                            cout << char(205);
                        }
                        cout << endl;

                }
                else{
                    if(opcion==3) //Se muestra menú de los ajustes de la cuenta
                    {
                    system("cls");
                    cout << "           "<<char(201);
                            for ( int i=1; i<=50; i++)
                            {
                                cout << char(205);
                            }
                            cout << char(187)<<endl;                    

                            for (int i=1; i<=3; i++)
                            {
                                cout <<"           " << char(186) << "                                                  "<< linea_blanco_100 << char(186) << endl;
                            }

                            
                            cout << "           " << char(186) << "         01 Cambiar nombre                        " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "         02 Cambiar celular de contacto           " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "         03 Regresar                              " << linea_blanco_65 << char(186) << endl;
                    

                            for (int i=1; i<=3; i++)
                            {
                                cout << "           " << char(186) << "                                                  " << linea_blanco_100 << char(186) << endl;
                            }

                            cout << "           "<<char(200);
                            for (int i=1;i<=50;i++)
                            {
                                cout << char(205);
                            }
                            cout << char(188)<<endl;

                            cout << "                       Cambiar? ";
                            cin >> Ajustes; //Se lee la indicación
                            system("cls");

                            if(Ajustes==1) //Se le permite cambiar el nombre de la cuenta
                            {
                                cout << "Tu nombre actual es: "<< Nombre_vendedor << endl;
                                cout << "Introduce tu nuevo nombre (Escriba asterisco '*' cuando termine): ";
                                 getline(cin, Nombre_vendedor,'*');
                                cout << endl << "Tu nombre ha cambiado a " << Nombre_vendedor <<endl;
                            }
                            else 
                            {
                                if(Ajustes==2) //Se le permite cambiar el celular de contacto
                                    {
                                        cout << "Tu celular de contacto actual es: " << Celular_vendedor << endl;
                                        cout << "Introduce tu nuevo celular (Escriba asterisco '*' cuando termine): ";
                                        getline(cin, Celular_vendedor,'*');
                                        cout << endl << "Tu celular ha cambiado a "<< Celular_vendedor <<endl;
                                    }
                                else
                                {
                                    cout << "Regresando...";
                                }
                            }
                }
                }
                }
                
                system("pause");
                    cout << "           "<<char(201); //Se le ofrece volver al menú del vendedor
                            for ( int i=1; i<=50; i++)
                            {
                                cout << char(205);
                            }
                            cout << char(187)<<endl;                    

                            for (int i=1; i<=3; i++)
                            {
                                cout <<"           " << char(186) << "                                                  "<< linea_blanco_100 << char(186) << endl;
                            }

                            cout << "           " << char(186) << "           Volver al menu del vendedor?           " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "                                                  " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "                      01 Si                       " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "                      02 No                       " << linea_blanco_65 << char(186) << endl;
                            
                    

                            for (int i=1; i<=3; i++)
                            {
                                cout << "           " << char(186) << "                                                  " << linea_blanco_100 << char(186) << endl;
                            }

                            cout << "           "<<char(200);
                            for (int i=1;i<=50;i++)
                            {
                                cout << char(205);
                            }
                            cout << char(188)<<endl;

                            cout << "                       Regresar? ";
                            cin >> regresar; //Se lee la instrucción
                            system("cls");



                    
                }while(regresar==1);
                }                
                break;
            case 3:               
                contador_intentos = 0; //Inicio de sesión como cliente
                cout << "Login cliente"<<endl;
                do
                {
                    cout << "Usuario :";
                    cin >> id;
                    cout << "Contraseña :";
                    cin >> password;
                    contador_intentos++;
                } while ((id != usuario_cliente || password != pwd_cliente ) && contador_intentos<numero_intentos);
                if ((id != usuario_cliente && password != pwd_cliente))
                {
                    cout << "Lo siento no tienes las credenciales correctas" <<endl;
                }
                else
                {
                    cout << "Si pudiste entrar como cliente"<<endl;
                    system("pause");

                do{

                cout << "           "<<char(201); //Se muestra el menú principal del cliente
                            for ( int i=1; i<=50; i++)
                            {
                                cout << char(205);
                            }
                            cout << char(187)<<endl;                    

                            for (int i=1; i<=3; i++)
                            {
                                cout <<"           " << char(186) << "                                                  "<< linea_blanco_100 << char(186) << endl;
                            }

                            
                            cout << "           " << char(186) << "             01 Ver productos en venta            " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "             02 Ajustes de cuenta                 " << linea_blanco_65 << char(186) << endl;
                            
                    

                            for (int i=1; i<=3; i++)
                            {
                                cout << "           " << char(186) << "                                                  " << linea_blanco_100 << char(186) << endl;
                            }

                            cout << "           "<<char(200);
                            for (int i=1;i<=50;i++)
                            {
                                cout << char(205);
                            }
                            cout << char(188)<<endl;

                            cout << "                       Regresar? ";
                            cin >> Ajustes; //Se lee la indicación
                            system("cls");
                if(Ajustes==1){
                system("cls");
                cout << "Estos son los productos disponibles del momento: " <<endl; // Se le muestran solamente los nombres de los productos en venta
                
                i=1;
                y=1;
                for(int x=0;x<n; x++)
                {
                    for ( int i=1; i<=40; i++)
                        {
                            cout << char(205);
                        }
                        cout << endl;
                    if(Producto_eliminado[i]==1) //Si un producto ha sido boqueado por un administrador se mostrará el mensaje en lugar del nombre del producto
                            {
                                cout << "[PRODUCTO NO DISPONIBLE]" << endl;
                            }
                    else{
                    cout << "Producto " << y << ": "<< Nombre_producto[i] << endl;}
                    y=y+1;
                    i=i+1;
                    
                    for ( int i=1; i<=40; i++)
                        {
                            cout << char(205);
                        }
                        cout << endl;
                }

                cout << "Eliga el numero de un producto para ver mas informacion: "; //El usuario puede elegir el número de uno de los producto para ver más detalles
                cin >> Producto_elegido;
                if(Producto_elegido<=n)
                {
                    i=Producto_elegido; //Se le muestran todos los detalles del producto
                    for ( int i=1; i<=100; i++)
                    {
                        cout << char(205);
                    }
                    cout << endl;

                    if(Producto_eliminado[i]==1)
                                {
                                    cout << "[PRODUCTO NO DISPONIBLE]" << endl;
                                }

                    cout << "Producto: " << Nombre_producto[i] << endl;
                    cout << "Precio: $" << Precio_producto[i] << endl;
                    cout << Descripcion_producto[i] << endl;
                    cout << endl;
                    cout << Ubicacion_producto[i] << endl;
                        
                    
                    
                    for (int i=1;i<=100;i++)
                    {
                        cout << char(205);
                    }
                    cout << endl;

                    system("pause");

                    cout << "           "<<char(201); //Se muestra un segundo menú al cliente respecto al producto que visualiza
                    for ( int i=1; i<=50; i++)
                        {
                            cout << char(205);
                        }
                    cout << char(187)<<endl;                    

                    for (int i=1; i<=3; i++)
                    {
                        cout <<"           " << char(186) << "                                                  "<< linea_blanco_100 << char(186) << endl;
                    }

                    
                    cout << "           " << char(186) << "     01 Para calcular costos de envio             " << linea_blanco_65 << char(186) << endl;
                    cout << "           " << char(186) << "     02 Para obtener contacto del vendedor        " << linea_blanco_65 << char(186) << endl;
                    cout << "           " << char(186) << "     03 Salir                                     " << linea_blanco_65 << char(186) << endl;

                    

                    for (int i=1; i<=3; i++)
                    {
                        cout << "           " << char(186) << "                                                  " << linea_blanco_100 << char(186) << endl;
                    }

                    cout << "           "<<char(200);
                    for (int i=1;i<=50;i++)
                        {
                            cout << char(205);
                        }
                    cout << char(188)<<endl;

                    cout << "                       Opcion ";
                    cin >> opcion; //Se lee la indicación

                    system("cls");

                    switch(opcion)
                    {
                        case 1: //Se le permite calcular costos de envío
                            cout << "Seleccione el destino mas cercano a usted" << endl;
                            cout << "           "<<char(201);
                            for ( int i=1; i<=50; i++)
                                {
                                    cout << char(205);
                                }
                            cout << char(187)<<endl;                    

                            for (int i=1; i<=3; i++)
                            {
                                cout <<"           " << char(186) << "                                                  "<< linea_blanco_100 << char(186) << endl;
                            }

                    
                            cout << "           " << char(186) << "                  01 Destino 1                    " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "                  02 Destino 2                    " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "                  03 Destino 3                    " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "                  04 Destino 4                    " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "                  05 Destino 5                    " << linea_blanco_65 << char(186) << endl;

                        

                            for (int i=1; i<=3; i++)
                            {
                                cout << "           " << char(186) << "                                                  " << linea_blanco_100 << char(186) << endl;
                            }

                            cout << "           "<<char(200);
                            for (int i=1;i<=50;i++)
                                {
                                    cout << char(205);
                                }
                            cout << char(188)<<endl;

                            cout << "                       Destino ";
                            cin >> Destino; //Se lee el destino seleccionado
                            
                            if(Ubicacion_producto[i]=="Ubicacion_1")
                            {
                                Bloque_switch=1;
                            }
                            else
                            {
                                if(Ubicacion_producto[i]=="Ubicacion_2")
                                {
                                    Bloque_switch=2;
                                }
                                else
                                {
                                    Bloque_switch=3;
                                }
                            }

                            switch(Bloque_switch) //Se realiza el cálculo de kilometros que tomará el viaje
                            {
                                case 1:
                                    switch(Destino)
                                    {
                                        case 1:
                                            Destino_producto[i]="Destino_1";
                                            Distancia_envio[i]=3240;
                                            break;
                                        case 2:
                                            Destino_producto[i]="Destino_2";
                                            Distancia_envio[i]=4651;
                                            break;
                                        case 3:
                                            Destino_producto[i]="Destino_3";
                                            Distancia_envio[i]=2074;
                                            break;
                                        case 4:
                                            Destino_producto[i]="Destino_4";
                                            Distancia_envio[i]=6001;
                                            break;
                                        case 5:
                                            Destino_producto[i]="Destino_5";
                                            Distancia_envio[i]=7012;
                                            break;
                                        case 6:
                                            Destino_producto[i]="Destino_6";
                                            Distancia_envio[i]=1945;
                                            break;
                                        default:
                                            cout << "Por favor da una opcion valida (1, 2, 3, 4 o 5)"<<endl;
                                    }
                                    break;
                                case 2:
                                    switch(Destino)
                                    {
                                        case 1:
                                            Destino_producto[i]="Destino_1";
                                            Distancia_envio[i]=3630;
                                            break;
                                        case 2:
                                            Destino_producto[i]="Destino_2";
                                            Distancia_envio[i]=4441;
                                            break;
                                        case 3:
                                            Destino_producto[i]="Destino_3";
                                            Distancia_envio[i]=2010;
                                            break;
                                        case 4:
                                            Destino_producto[i]="Destino_4";
                                            Distancia_envio[i]=4201;
                                            break;
                                        case 5:
                                            Destino_producto[i]="Destino_5";
                                            Distancia_envio[i]=7622;
                                            break;
                                        case 6:
                                            Destino_producto[i]="Destino_6";
                                            Distancia_envio[i]=1985;
                                            break;
                                        default:
                                            cout << "Por favor da una opcion valida (1, 2, 3, 4 o 5)"<<endl;
                                    }
                                    break;
                                case 3:
                                    switch(Destino)
                                    {
                                        case 1:
                                            Destino_producto[i]="Destino_1";
                                            Distancia_envio[i]=3410;
                                            break;
                                        case 2:
                                            Destino_producto[i]="Destino_2";
                                            Distancia_envio[i]=2651;
                                            break;
                                        case 3:
                                            Destino_producto[i]="Destino_3";
                                            Distancia_envio[i]=2074;
                                            break;
                                        case 4:
                                            Destino_producto[i]="Destino_4";
                                            Distancia_envio[i]=3411;
                                            break;
                                        case 5:
                                            Destino_producto[i]="Destino_5";
                                            Distancia_envio[i]=7152;
                                            break;
                                        case 6:
                                            Destino_producto[i]="Destino_6";
                                            Distancia_envio[i]=4245;
                                            break;
                                        default:
                                            cout << "Por favor da una opcion valida (1, 2, 3, 4 o 5)"<<endl;
                                    }
                                    break;
                                default:
                                    cout << "Por favor da una opcion valida (1, 2 o 3)"<<endl;
                            }
                            //Se realiza el cálculo de el costo de envío y costo total
                            cout << endl << "El producto viajara de " << Ubicacion_producto[i] << " hasta " << Destino_producto[i] << endl;
                            cout << "Recorriendo un total de " << Distancia_envio[i] << " kilometros " << endl;
                            Costo_envio[i]=Distancia_envio[i]*Costo_kilometro;
                            cout << "Con un coste por kilometro de $"<< Costo_kilometro << ", el envio costara: $" << Costo_envio[i] << endl;
                            Precio_total[i]=Costo_envio[i]+Precio_producto[i];
                            cout << "El precio total por el producto sera de: $" << Precio_total[i] << endl;
                            cout << endl;
                            system("pause");


                            cout << "           "<<char(201); //Se le muestra un tercer menú, con más opciones
                            for ( int i=1; i<=50; i++)
                                {
                                    cout << char(205);
                                }
                            cout << char(187)<<endl;                    

                            for (int i=1; i<=3; i++)
                            {
                                cout <<"           " << char(186) << "                                                  "<< linea_blanco_100 << char(186) << endl;
                            }

                    
                            cout << "           " << char(186) << "     01 Para obtener contacto del vendedor        " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "     02 Agregar al carrito                        " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "     03 Salir                                     " << linea_blanco_65 << char(186) << endl;
                    

                            for (int i=1; i<=3; i++)
                            {
                                cout << "           " << char(186) << "                                                  " << linea_blanco_100 << char(186) << endl;
                            }

                            cout << "           "<<char(200);
                            for (int i=1;i<=50;i++)
                            {
                                cout << char(205);
                            }
                            cout << char(188)<<endl;

                            cout << "                       Opcion ";
                            cin >> opcion; //Se lee la instrucción

                            if(opcion==1) //Se le muestra la información del vendedor
                            {
                                cout << endl;
                                cout << "El vendedor es: " << Nombre_vendedor << endl;
                                cout << "Su celular es: " << Celular_vendedor << endl;
                                cout << endl;
                            }
                            else{
                                if(opcion==2) //Se agrega el producto seleccionado al carrito, permitiendole seguir buscando otros productos
                                {
                                    Carrito=Carrito + Precio_total[i];
                                    cout << endl;
                                    cout << "Producto agregado al carrito"<<endl;
                                    cout << "carrito actual: " << Carrito <<endl;
                                    cout << endl;
                                }
                            }
                            

                            break;
                        case 2: //Se le muestra la información del vendedor
                            cout << endl;
                            cout << "El vendedor es: " << Nombre_vendedor << endl;
                            cout << "Su celular es: " << Celular_vendedor << endl;
                            cout << endl;
                            break;
                        case 3:
                            break;
                        default:
                            cout << "Por favor da una opcion valida (1, 2 o 3)"<<endl;
                    }
                }
                }
                else
                {
                    system("cls"); //Se le muestra el menú de ajustes
                    
                    cout << "           "<<char(201);
                            for ( int i=1; i<=50; i++)
                            {
                                cout << char(205);
                            }
                            cout << char(187)<<endl;                    

                            for (int i=1; i<=3; i++)
                            {
                                cout <<"           " << char(186) << "                                                  "<< linea_blanco_100 << char(186) << endl;
                            }

                            
                            cout << "           " << char(186) << "         01 Cambiar nombre                        " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "         02 Cambiar celular de contacto           " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "         03 Regresar                              " << linea_blanco_65 << char(186) << endl;
                    

                            for (int i=1; i<=3; i++)
                            {
                                cout << "           " << char(186) << "                                                  " << linea_blanco_100 << char(186) << endl;
                            }

                            cout << "           "<<char(200);
                            for (int i=1;i<=50;i++)
                            {
                                cout << char(205);
                            }
                            cout << char(188)<<endl;

                            cout << "                       Cambiar? ";
                            cin >> Ajustes; //Se lee la opcion elegida
                            system("cls");

                            if(Ajustes==1) //Se le permite cambiar de nombre
                            {
                                cout << "Tu nombre actual es: "<< Nombre_cliente << endl;
                                cout << "Introduce tu nuevo nombre (Escriba asterisco '*' cuando termine): ";
                                 getline(cin, Nombre_cliente,'*');
                                cout << endl << "Tu nombre ha cambiado a " << Nombre_cliente <<endl;
                            }
                            else
                            {
                                if(Ajustes==2) //Se le permite cambiar su celular de contacto
                                    {
                                        cout << "Tu celular de contacto actual es: " << Celular_cliente << endl;
                                        cout << "Introduce tu nuevo celular (Escriba asterisco '*' cuando termine): ";
                                        getline(cin, Celular_cliente,'*');
                                        cout << endl << "Tu celular ha cambiado a " << Celular_cliente <<endl;
                                    }
                                else
                                {
                                    cout << "Regresando...";
                                }
                            }
                }
                system("pause");
                    cout << "           "<<char(201); //Se le ofrece continuar buscando más productos
                            for ( int i=1; i<=50; i++)
                            {
                                cout << char(205);
                            }
                            cout << char(187)<<endl;                    

                            for (int i=1; i<=3; i++)
                            {
                                cout <<"           " << char(186) << "                                                  "<< linea_blanco_100 << char(186) << endl;
                            }

                            cout << "           " << char(186) << "               Continuar buscando?                " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "                                                  " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "                      01 Si                       " << linea_blanco_65 << char(186) << endl;
                            cout << "           " << char(186) << "                      02 No                       " << linea_blanco_65 << char(186) << endl;
                            
                    

                            for (int i=1; i<=3; i++)
                            {
                                cout << "           " << char(186) << "                                                  " << linea_blanco_100 << char(186) << endl;
                            }

                            cout << "           "<<char(200);
                            for (int i=1;i<=50;i++)
                            {
                                cout << char(205);
                            }
                            cout << char(188)<<endl;

                            cout << "                       Regresar? ";
                            cin >> regresar; //Se lee la opcion
                            system("cls");



                    
                }while(regresar==1);
                }
                
                break;
            case 4: //El programa cierra
                cout << "Vamos a salir"<<endl;
                system("pause");
                system("cls");
                break;
                salir=1;
            default:
                cout << "Por favor da una opcion valida (1, 2, 3 o 4)"<<endl;
        }
        cout << "Desea cambiar de cuenta? \n 1 -> Si \n 2 -> No" <<endl;
        cin >> cambiar_cuenta;
        }while(cambiar_cuenta==1); 
    }   
    while (salir==1);

   return 0; //Fin del programa
}