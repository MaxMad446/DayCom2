// Auto-generated module | 2026-05-12T03:58:37.060683
#include <iostream>
#include <vector>

int compute_500() {
    int base = 22;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_500() << std::endl;
    return 0;
}
