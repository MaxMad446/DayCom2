// Auto-generated module | 2026-05-12T20:44:03.238833
#include <iostream>
#include <vector>

int compute_660() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_660() << std::endl;
    return 0;
}
