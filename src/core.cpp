// Auto-generated module | 2026-05-11T19:51:12.334697
#include <iostream>
#include <vector>

int compute_873() {
    int base = 435;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_873() << std::endl;
    return 0;
}
