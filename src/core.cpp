// Auto-generated module | 2026-05-12T06:18:48.378769
#include <iostream>
#include <vector>

int compute_873() {
    int base = 71;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_873() << std::endl;
    return 0;
}
