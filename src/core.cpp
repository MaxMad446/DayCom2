// Auto-generated module | 2026-05-12T20:48:54.521176
#include <iostream>
#include <vector>

int compute_841() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_841() << std::endl;
    return 0;
}
