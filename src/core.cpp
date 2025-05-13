// Auto-generated module | 2026-05-12T21:19:06.955536
#include <iostream>
#include <vector>

int compute_239() {
    int base = 197;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_239() << std::endl;
    return 0;
}
