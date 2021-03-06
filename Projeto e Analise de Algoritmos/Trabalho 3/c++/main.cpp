/*
*  Projeto e Análise de Algoritmos - Codificação de Huffman
*  Matheus S. Serpa - 121151631
*  matheusserpa@gmail.com
*/

#include <iostream>
#include "huffman.h"

using namespace std;

int main(int argc, char **argv) {
    if (argc == 1) {
        cerr << "Usage: " << argv[0] << " <text_file>" << endl;
        return 1;
    }
    huffman H(argv[1]);

    H.encode();

    cout << "ASCII Size:\t" << H.getTextSize() << " bits" << endl;
    cout << "Huffman Size:\t" << H.getCompressedSize() << " bits" << endl;

    /*
      cout << "Text: " << H.getText() << endl;
      cout << "Huffman Text: " << H.getCompressedText() << endl;
      cout << "ASCII Size: " << H.getTextSize() << " bits" << endl;
      cout << "Huffman Size: " << H.getCompressedSize() << " bits" << endl;
      cout << "Huffman compresion: " << H.getCompressionRatio() << "%" << endl;  
    */

    return 0;
};
