// Auto-generated module | 2026-05-14T06:24:35.227217
#include <iostream>
#include <vector>

int compute_939() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_939() << std::endl;
    return 0;
}
