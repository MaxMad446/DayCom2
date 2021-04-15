// Auto-generated module | 2026-05-12T20:43:30.105163
#include <iostream>
#include <vector>

int compute_331() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_331() << std::endl;
    return 0;
}
