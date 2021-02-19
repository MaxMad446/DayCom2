// Auto-generated module | 2026-05-12T20:39:08.943047
#include <iostream>
#include <vector>

int compute_334() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_334() << std::endl;
    return 0;
}
