/**
 * @file     contaPoupanca.h
 * @brief    Arquivo cabecalho com a definicao dos metodos da classe conta poupanca derivada da classe conta
 *
 * @author   Joicy Oliveira
 * @since    11/05/2018
 * @date     13/05/2018
 */

#ifndef POUPANCA_H
#define POUPANCA_H

#include "conta.h"

/**
* @class 	ContaPoupanca
* @brief 	Classe que representa uma conta poupanca, herda de conta
*/
class ContaPoupanca : public Conta {
	private:
		int m_numero;
		string m_titular;
		double m_saldo;
		short m_dia, m_mes, m_ano;
		double m_juros;

	public:
		/**
		* @brief Construtor padrão
		*/
		ContaPoupanca();

		/**
		* @brief	 Construtor paramatrizado
		* @param 	_numero Numero da conta
		* @param 	_saldo Saldo da conta
		*/
		ContaPoupanca(int _numero, string _titular, double _saldo);
		
		/**
		* @brief Destrutor padrão
		*/
		~ContaPoupanca();

		/**
		* @brief	 Método que extrai o número da conta
		* @return 	 Número da conta
		*/
		int getNumero();  

		/**
		* @brief	 Método que extrai o saldo da conta
		* @return 	 Saldo da conta
		*/
		double getSaldo();  

		/**
		* @brief	 Método que extrai o titular da conta
		* @return 	 Titular da conta
		*/
		string getTitular();  

		/**
		* @brief	 Método que extrai o juros aplicado na conta
		* @return 	 Juros
		*/
		double getJuros();	

		/**
		* @brief	 Método que extrai o dia da conta
		* @return 	 Dia
		*/
		short getDia();

		/**
		* @brief	 Método que extrai o mês da conta
		* @return 	 Mês
		*/
		short getMes(); 

		/**
		* @brief	 Método que extrai o ano da conta
		* @return 	 Ano
		*/
		short getAno();	

		/**
		* @brief	Altera o número da conta
		* @param	_numero Número da conta
		* @return 	Não retorna valor
		*/	
		void setNumero(int _numero);  
		
		/**
		* @brief	Altera o titular da conta
		* @param	_titular Titular da conta
		* @return 	Não retorna valor
		*/	
		void setTitular(string _titular); 

		/**
		* @brief	Altera o juros aplicado na conta
		* @return 	Não retorna valor
		*/	
		void setJuros(); 

		/**
		* @brief	Altera o dia da conta
		* @return 	Não retorna valor
		*/
		void setDia();		
		
		/**
		* @brief	Altera o mês da conta
		* @return 	Não retorna valor
		*/
		void setMes();	

		/**
		* @brief	Altera o ano da conta
		* @return 	Não retorna valor
		*/
		void setAno();	
		
		/**
		* @brief	Efetua depósito na conta
		* @param	_valor Valor a ser depositado
		* @return 	Não retorna valor
		*/	
		void deposito(double _valor);    

		/**
		* @brief	Efetua saque na conta
		* @param	_valor Valor a ser sacado
		* @return 	Não retorna valor
		*/
		void saque(double _valor);      

		/**
		* @brief	Atualiza o saldo da conta
		* @return 	Saldo
		*/
		double atualiza();	
};

#endif