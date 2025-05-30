// Auto-generated module | 2026-05-12T04:12:28.001776
#include <iostream>
#include <vector>

int compute_896() {
    int base = 377;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_896() << std::endl;
    return 0;
}
