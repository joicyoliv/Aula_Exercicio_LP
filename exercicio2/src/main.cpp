/**
 * @file     main.h
 * @brief    Função principal para execução do programa
 *
 * @author   Joicy Oliveira
 * @since    11/05/2018
 * @date     13/05/2018
 */
#include <memory>
#include <iostream>
#include "contaCorrente.h"
#include "fruta.h"
#include "bebida.h"
#include "produto.h"
#include <vector>

/** @brief  Função principal */
int main() {
	ContaCorrente *contaCorrente = new ContaCorrente();
	contaCorrente->setTitular("João Paulo");
	contaCorrente->setLimite(100);

	std::cout << "Saldo da conta corrente : " << contaCorrente->getSaldo() << std::endl;
	std::cout << "Definindo limite da conta corrente para 100 : " << std::endl;
	contaCorrente->setLimite(100);


	double valorTotal=0;
	std::vector<std::shared_ptr<Produto>> lista;
	
	lista.push_back(std::make_shared<Fruta>("40028922-00","Massan",1.35,"Muito tempo",1));
	lista.push_back(std::make_shared<Bebida>("40028922-00","Cerveja Schin",2.50,99));
	
	for(auto i(lista.begin()) ; i != lista.end(); ++i){
		std::cout << (**i) << std::endl;
		valorTotal+= (*i)->getPreco();
	}

	std::cout<< "Valor total da compra : " << valorTotal << std::endl;
	contaCorrente->saque(valorTotal);
	std::cout << "Saldo da conta corrente aṕos a compra : " << contaCorrente->getSaldo() << std::endl;


	std::cout << "Depositando R$ 100 na conta corrente! " << std::endl;
	contaCorrente->deposito(100);
	std::cout << "Saldo da conta corrente apos deposito : " << contaCorrente->getSaldo() << std::endl;

	

	return 0;
}