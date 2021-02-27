// Auto-generated module | 2026-05-12T21:35:21.551060
#include <iostream>
#include <vector>

int compute_232() {
    int base = 227;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_232() << std::endl;
    return 0;
}
