// Auto-generated module | 2026-05-12T03:38:52.028977
#include <iostream>
#include <vector>

int compute_246() {
    int base = 95;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_246() << std::endl;
    return 0;
}
