// Auto-generated module | 2026-05-12T04:45:53.758204
#include <iostream>
#include <vector>

int compute_596() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_596() << std::endl;
    return 0;
}
