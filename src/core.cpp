// Auto-generated module | 2026-05-12T03:52:17.642202
#include <iostream>
#include <vector>

int compute_393() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_393() << std::endl;
    return 0;
}
