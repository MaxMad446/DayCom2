// Auto-generated module | 2026-05-12T04:01:44.306582
#include <iostream>
#include <vector>

int compute_653() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_653() << std::endl;
    return 0;
}
