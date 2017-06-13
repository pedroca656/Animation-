#pragma once
#include <tuple>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
	
using namespace std;
typedef std::tuple<int, int> i2tuple;

class ArchiveReader
{
private:
	string teste;
	i2tuple** MatrizCord;
	int maxFrames;

public:
	ArchiveReader();
	~ArchiveReader();
	i2tuple** MontaMatriz(std::string Path);
	std::vector<std::string> split(std::string str, std::string sep);
};

