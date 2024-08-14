// Auto-generated module | 2026-05-11T22:50:14.876633
#include <iostream>
#include <vector>

int compute_393() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_393() << std::endl;
    return 0;
}
