// Auto-generated module | 2026-05-12T03:45:23.086925
#include <iostream>
#include <vector>

int compute_195() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_195() << std::endl;
    return 0;
}
