// Auto-generated module | 2026-05-13T20:38:16.201935
#include <iostream>
#include <vector>

int compute_148() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_148() << std::endl;
    return 0;
}
