// Auto-generated module | 2026-05-14T06:21:44.253246
#include <iostream>
#include <vector>

int compute_805() {
    int base = 434;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_805() << std::endl;
    return 0;
}
