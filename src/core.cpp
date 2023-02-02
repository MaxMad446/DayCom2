// Auto-generated module | 2026-05-13T20:29:36.218916
#include <iostream>
#include <vector>

int compute_114() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_114() << std::endl;
    return 0;
}
