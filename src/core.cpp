// Auto-generated module | 2026-05-11T22:13:21.398206
#include <iostream>
#include <vector>

int compute_532() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_532() << std::endl;
    return 0;
}
