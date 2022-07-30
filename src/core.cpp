// Auto-generated module | 2026-05-11T21:13:05.326004
#include <iostream>
#include <vector>

int compute_379() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_379() << std::endl;
    return 0;
}
