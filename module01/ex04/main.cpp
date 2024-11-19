#include "ex4.hpp"

std::string replaceInLine(const std::string& line, const std::string& s1, const std::string& s2) {
    std::string result;
    size_t pos = 0;
    size_t lastPos = 0;

    while ((pos = line.find(s1, lastPos)) != std::string::npos) {
        result += line.substr(lastPos, pos - lastPos);
        result += s2;
        lastPos = pos + s1.length();
    }
    result += line.substr(lastPos);
    return (result);
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Syntaxe : ./" << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return (-1);
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty()) {
        std::cerr << "Error: s1 is empty" << std::endl;
        return (-1);
    }

    std::ifstream inFile(filename.c_str());
    if (!inFile.is_open()) {
        std::cerr << "Error: cannot open the file" << std::endl;
        return (-1);
    }

    std::string outFilename = filename + ".replace";
    std::ofstream outFile(outFilename.c_str());
    if (!outFile.is_open()) {
        std::cerr << "Error: cannot create the output file" << std::endl;
        inFile.close();
        return (-1);
    }

    std::string line;
    while (std::getline(inFile, line)) {
        outFile << replaceInLine(line, s1, s2);
        if (!inFile.eof()) {
            outFile << std::endl;
        }
    }

    inFile.close();
    outFile.close();
    return (0);
}

/*
Fichier test :

Journal d'une journée au parc à chiens:
Ce matin, j'ai vu un Corgi faire des bonds joyeux!
Le Corgi jouait avec une balle rouge.
Puis un autre Corgi est arrivé en courant.
* Les deux Corgi se sont mis à aboyer de bonheur *
Un grand Labrador les regardait, amusé.
Le Corgi est vraiment le roi de la récré!
Note: Le Corgi est un excellent compagnon pour les enfants
*/
