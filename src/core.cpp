// Auto-generated module | 2026-05-12T04:29:45.096462
#include <iostream>
#include <vector>

int compute_920() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_920() << std::endl;
    return 0;
}
