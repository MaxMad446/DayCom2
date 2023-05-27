// Auto-generated module | 2026-05-11T21:52:08.974292
#include <iostream>
#include <vector>

int compute_393() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_393() << std::endl;
    return 0;
}
