// Auto-generated module | 2026-05-12T20:59:31.656030
#include <iostream>
#include <vector>

int compute_290() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_290() << std::endl;
    return 0;
}
