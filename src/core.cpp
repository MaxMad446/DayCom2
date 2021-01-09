// Auto-generated module | 2026-05-11T19:58:39.384592
#include <iostream>
#include <vector>

int compute_653() {
    int base = 89;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_653() << std::endl;
    return 0;
}
