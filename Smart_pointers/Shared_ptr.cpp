// Programa C++ para ilustrar o uso do "shared_ptr"

#include<iostream> 
#include<memory> 
using namespace std; 
  
class ExemploSHARED 
{ 
public: 
    void mostrar() 
    { 
        cout << "A::mostrar()\n{\n\t...\n\t...\n\t...\n}" << endl; 
    } 
}; 
  
int main(int argc, char*argv[]) 
{ 
    shared_ptr<ExemploSHARED> p1(new ExemploSHARED); 
    

    p1 -> mostrar(); 
    cout << "Endereco de memoria de p1: " << p1.get() << endl; 
    cout << "_______________________________________________________________________________________________________" << endl;
    
    shared_ptr<ExemploSHARED> p2(p1); 
    p2 -> mostrar(); 
    cout << "Endereco de memoria de p1: " << p1.get() << endl; 
    cout << "Endereco de memoria de p2: " << p2.get() << endl; 
    cout << "_______________________________________________________________________________________________________" << endl;
  
    // Retorna o número de objetos "shared_ptr" 
	//(compartilhados) referentes ao mesmo 
	//objeto gerenciado.
    cout << "Ponteiros acessando objeto: " << p1.use_count() << endl; 
    cout << "Ponteiros acessando objeto: " << p2.use_count() << endl; 
  
    // P1 é resetado, deixa de ter propriedade 
    //sobre o objeto e ponteiro se torna NULL 
    p1.reset(); 
    cout << "\n//Endereco de p1 agora eh zero, pois foi resetado\n" << "Endereco de memoria de p1: " << p1.get() << endl; 
    cout << "Ponteiros acessando objeto: " 	<< p2.use_count() 	<< endl; 
    cout << "Endereco de memoria de p2: " 	<< p2.get() 		<< endl; 
    cout << "_______________________________________________________________________________________________________" << endl;
  
    return 0; 
} 
