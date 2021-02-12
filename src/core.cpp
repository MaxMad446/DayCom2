// Auto-generated module | 2026-05-12T21:34:10.340725
#include <iostream>
#include <vector>

int compute_807() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_807() << std::endl;
    return 0;
}
