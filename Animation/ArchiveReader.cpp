#include "ArchiveReader.h"

ArchiveReader::ArchiveReader()
{
}


ArchiveReader::~ArchiveReader()
{
}

i2tuple ** ArchiveReader::MontaMatriz(std::string Path)
{
	int i = 0, pessoas = 0;
	string aux, num;
	maxFrames = 0;
	std::vector<std::string> aux2;

	ifstream arq, arq2; // Cria input file stream (ifstream)
	cout << "Abrindo arquivo texto..." << endl;
	arq.open("BD.txt", ios::in); // Abre arquivo

	if (!arq.is_open()) {				// Se houver erro, sai do programa
		cout << "Fechando arquivo 1..." << endl;
		return 0;
	}

	do {
		getline(arq, aux);
		if (aux[0] != 0) {
			cout << "Lendo linha " << aux << endl;
			if (aux[0] >= int(48) && aux[0] <= int(57)) { //so entra quando pega um char numerico na primeira pos, pois eh uma pessoa
				pessoas++;

				aux2 = split(aux, "\t");

				num = std::stoi(aux2[0]);
				//TODO: pegar o número no inicio da string aux para ver se é o maior número de frames
			}

		}
	} while (arq.good());
	arq.close();

	//criar uma matriz de pessoas x maior numero de frames que uma unica pessoa participa
	//preencher matriz


	return 0;
}

std::vector<std::string> split(std::string str, std::string sep) {
	char* cstr = const_cast<char*>(str.c_str());
	char* current;
	std::vector<std::string> arr;
	current = strtok(cstr, sep.c_str());
	while (current != NULL) {
		arr.push_back(current);
		current = strtok(NULL, sep.c_str());
	}
	return arr;
}
