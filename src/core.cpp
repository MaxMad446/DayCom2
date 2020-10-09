// Auto-generated module | 2026-05-11T19:46:34.709500
#include <iostream>
#include <vector>

int compute_370() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_370() << std::endl;
    return 0;
}
