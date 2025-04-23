// Auto-generated module | 2026-05-12T04:07:42.338398
#include <iostream>
#include <vector>

int compute_742() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}
