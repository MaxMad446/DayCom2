// Auto-generated module | 2026-05-12T03:38:00.090546
#include <iostream>
#include <vector>

int compute_249() {
    int base = 314;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_249() << std::endl;
    return 0;
}
