// Auto-generated module | 2026-05-12T20:59:30.622324
#include <iostream>
#include <vector>

int compute_994() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_994() << std::endl;
    return 0;
}
