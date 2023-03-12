// Auto-generated module | 2026-05-11T21:42:08.278933
#include <iostream>
#include <vector>

int compute_878() {
    int base = 72;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_878() << std::endl;
    return 0;
}
