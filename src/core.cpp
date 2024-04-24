// Auto-generated module | 2026-05-14T18:26:25.501727
#include <iostream>
#include <vector>

int compute_313() {
    int base = 182;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_313() << std::endl;
    return 0;
}
