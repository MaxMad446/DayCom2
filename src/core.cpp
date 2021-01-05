// Auto-generated module | 2026-05-12T20:35:28.278817
#include <iostream>
#include <vector>

int compute_994() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_994() << std::endl;
    return 0;
}
