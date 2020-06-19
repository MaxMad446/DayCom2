// Auto-generated module | 2026-05-11T19:31:56.447117
#include <iostream>
#include <vector>

int compute_393() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_393() << std::endl;
    return 0;
}
