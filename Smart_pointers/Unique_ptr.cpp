// Programa C++ para ilustrar o uso do "unique_ptr"

#include<iostream> 
#include<memory> 
using namespace std; 
  
class ExemploUNIQUE 
{ 
public: 
    void mostrar() 
		{  
			cout << "A::mostrar()\n{\tbla bla bla\n\tbla bla bla\n\t...\n}" << endl << endl;	
		}
}; 
  
  
int main(int argc, char*argv[]) 
{ 
	// p1 é um "unique_ptr" da classe [tipo] Exemplo
    unique_ptr<ExemploUNIQUE> p1 (new ExemploUNIQUE); 
    
    
    p1 -> mostrar(); 
    // Retorna o endereço de memória de p1 
    cout << "Endereco de memoria de p1: " << p1.get() << endl; 
    cout << "_______________________________________________________________________________________________________" << endl;
    
    // Move-se p1 para p2, então p1 fica vazio
    // Nao pode copiar p1 para p2, pois, "unique_ptr" permite um ponteiro por vez 
    unique_ptr<ExemploUNIQUE> p2 = move(p1); 
    p2 -> mostrar(); 
    cout <<"//Endereco de p1 eh zero, pois foi movido para p2!\n" << "Endereco de memoria de p1: " << p1.get() << endl; 
    cout << "Endereco de memoria de p2: " << p2.get() << endl; 
  	cout << "_______________________________________________________________________________________________________" << endl;
  	
    // Move-se p2 para p3, então p2 fica vazio
    unique_ptr<ExemploUNIQUE> p3 = move(p2); 
    p3 -> mostrar(); 
    cout <<"//Endereco de p1 eh zero, pois foi movido para p2!\n" << "Endereco de memoria de p1: " << p1.get() << endl; 
    cout <<"//Endereco de p2 eh zero, pois foi movido para p3!\n" << "Endereco de memoria de p2: " << p2.get() << endl; 
    cout << "Endereco de memoria de p3: " << p3.get() << endl; 
    cout << "_______________________________________________________________________________________________________" << endl << endl;
    
    return 0; 
} 
