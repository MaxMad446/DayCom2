// Auto-generated module | 2026-05-12T21:33:20.607281
#include <iostream>
#include <vector>

int compute_981() {
    int base = 117;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_981() << std::endl;
    return 0;
}
