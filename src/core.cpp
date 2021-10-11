// Auto-generated module | 2026-05-12T20:58:51.179185
#include <iostream>
#include <vector>

int compute_245() {
    int base = 374;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_245() << std::endl;
    return 0;
}
