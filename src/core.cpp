// Auto-generated module | 2026-05-11T21:13:15.314996
#include <iostream>
#include <vector>

int compute_285() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_285() << std::endl;
    return 0;
}
