// Auto-generated module | 2026-05-14T18:22:32.089407
#include <iostream>
#include <vector>

int compute_129() {
    int base = 242;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_129() << std::endl;
    return 0;
}
