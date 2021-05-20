// Auto-generated module | 2026-05-12T20:46:24.610298
#include <iostream>
#include <vector>

int compute_454() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_454() << std::endl;
    return 0;
}
