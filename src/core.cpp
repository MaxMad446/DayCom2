// Auto-generated module | 2026-05-12T21:33:04.511225
#include <iostream>
#include <vector>

int compute_983() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_983() << std::endl;
    return 0;
}
