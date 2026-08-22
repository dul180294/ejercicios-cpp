// SISTEMA DE CALIFICACIONES
#include<iostream> 
#include<string> 
using namespace std;
std::cout<< "Bienvenido al sistema de calificaciones." << std::endl;

const int MAX_ALUMNOS = 5;



float calcularPromedio(float calificaciones[],int cantidadAlumnos){
    float suma=0;
    for(int i = 0 ; i < cantidadAlumnos; i++){
        suma = suma + calificaciones[i];
    }
    float promedio = suma / cantidadAlumnos;
    return promedio;
}

//programa principal.
int main(){
    string nombres[MAX_ALUMNOS];
    float calificaciones[MAX_ALUMNOS];
    int cantidadAlumnos = 0;
    int opcion;
    
    do{
        cout<<"\n===== SISTEMA DE CALIFICACIONES ====="<<endl;
        cout<<"1. Registrar alumno"<<endl;
        cout<<"2. Mostrar alumnos"<<endl;
        cout<<"3. Calcular promedio"<<endl;


        cout<<"4. Buscar alumno"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Selecciona una opcion: ";
        cin>>opcion;
        switch(opcion){
            
            // OPCIÓN 1: REGISTRAR ALUMNO.
            case1:
            if(cantidadAlumnos<MAX_ALUMNOS){
                cout<<"Nombre del alumno: ";
                cin>>nombres[cantidadAlumnos];
                cout<<"Calificacion: ";
                cin>>calificaciones[cantidadAlumnos];
                if(calificaciones[cantidadAlumnos]>= 0 &&
                    calificaciones[cantidadAlumnos]<= 10){
                        cantidadAlumnos++;
                        cout<<"Alumno registrado correctamente."<<endl;
                    }else{

                        
                        cout<<"La calificacion debe estar entre 0 y 10."
                        <<endl;}
                    }else{
                        cout<<"Ya no se pueden registrar mas alumnos."<<endl;}
                        break;
                        
                        // OPCIÓN 2: MOSTRAR ALUMNOS.
                        case2:
                        if(cantidadAlumnos==0){
                            cout<<"No existen alumnos registrados."<<endl;
                        }else{
                            cout<<"\n===== ALUMNOS REGISTRADOS ====="<<endl;
                            for(int i=0; i<cantidadAlumnos;i++){
                                cout<<nombres[i];
                                cout<<" - "<<calificaciones[i];
                                if(calificaciones[i]>=6){
                                    cout<<" - APROBADO"<<endl;
                                }else{
                                cout<<" - REPROBADO"<<endl;
                            }
                        }
                    }
                    
                    break;
    
    // OPCIÓN 3: CALCULAR PROMEDIO.
    case3:
    if(cantidadAlumnos==0){
        cout<<"No existen alumnos registrados."<<endl;
    }else{
        float promedio=calcularPromedio(calificaciones,cantidadAlumnos);
        cout<<"Promedio del grupo: "<<promedio<<endl;
    }
    break;
    
    // OPCIÓN 4: BUSCAR ALUMNO
    case4:{
        if(cantidadAlumnos==0){
            cout<<"No existen alumnos registrados."<<endl;
        }else{
            string nombreBuscado;
            bool encontrado = false;
            cout <<"Nombre del alumno que deseas buscar: ";
            cin >>nombreBuscado;
            for (int i=0; i<cantidadAlumnos;i++){

    if(nombres[i]==nombreBuscado){
        cout<<"\nAlumno encontrado."<<endl;
        cout<<"Nombre: "<<nombres[i]<<endl;
        cout<<"Calificacion: "<<calificaciones[i]<<endl;
        if(calificaciones[i]>=6){
            cout<<"Estado: APROBADO"<<endl;
        }else{
            cout<<"Estado: REPROBADO"<<endl;
        }
        
        encontrado=true;
    }
}

    if(encontrado==false){
        cout<<"Alumno no encontrado."<<endl;}}
    break;

}

// OPCIÓN 5: SALIR.
case5:
cout<<"Gracias por utilizar el sistema."<<endl;
break;
default:
cout<<"Opcion no valida."<<endl;
break;
}

}while(opcion!=5);
return 0;
}
