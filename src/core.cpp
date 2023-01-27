// Auto-generated module | 2026-05-11T21:36:32.727444
#include <iostream>
#include <vector>

int compute_503() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_503() << std::endl;
    return 0;
}
