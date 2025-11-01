// Auto-generated module | 2026-05-12T04:33:09.089012
#include <iostream>
#include <vector>

int compute_393() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_393() << std::endl;
    return 0;
}
