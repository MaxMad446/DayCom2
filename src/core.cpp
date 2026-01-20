// Auto-generated module | 2026-05-12T04:43:53.056737
#include <iostream>
#include <vector>

int compute_799() {
    int base = 439;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_799() << std::endl;
    return 0;
}
