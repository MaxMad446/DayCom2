// Auto-generated module | 2026-05-12T21:28:18.068307
#include <iostream>
#include <vector>

int compute_487() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_487() << std::endl;
    return 0;
}
