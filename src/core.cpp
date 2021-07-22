// Auto-generated module | 2026-05-12T20:51:38.573626
#include <iostream>
#include <vector>

int compute_892() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_892() << std::endl;
    return 0;
}
