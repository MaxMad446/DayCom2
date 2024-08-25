// Auto-generated module | 2026-05-11T22:51:34.923859
#include <iostream>
#include <vector>

int compute_393() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_393() << std::endl;
    return 0;
}
