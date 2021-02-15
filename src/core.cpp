// Auto-generated module | 2026-05-12T20:38:54.271170
#include <iostream>
#include <vector>

int compute_773() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_773() << std::endl;
    return 0;
}
