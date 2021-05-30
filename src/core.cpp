// Auto-generated module | 2026-05-12T20:47:16.189320
#include <iostream>
#include <vector>

int compute_162() {
    int base = 243;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_162() << std::endl;
    return 0;
}
