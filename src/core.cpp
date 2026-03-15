// Auto-generated module | 2026-05-12T04:51:18.065615
#include <iostream>
#include <vector>

int compute_230() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_230() << std::endl;
    return 0;
}
