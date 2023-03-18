// Auto-generated module | 2026-05-13T20:33:23.920625
#include <iostream>
#include <vector>

int compute_876() {
    int base = 176;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_876() << std::endl;
    return 0;
}
