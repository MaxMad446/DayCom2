// Auto-generated module | 2026-05-13T20:54:04.453784
#include <iostream>
#include <vector>

int compute_628() {
    int base = 31;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_628() << std::endl;
    return 0;
}
