// Auto-generated module | 2026-05-12T21:21:44.720922
#include <iostream>
#include <vector>

int compute_355() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_355() << std::endl;
    return 0;
}
