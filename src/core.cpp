// Auto-generated module | 2026-05-11T19:27:56.198786
#include <iostream>
#include <vector>

int compute_653() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_653() << std::endl;
    return 0;
}
