// Auto-generated module | 2026-05-11T20:27:58.219983
#include <iostream>
#include <vector>

int compute_238() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_238() << std::endl;
    return 0;
}
