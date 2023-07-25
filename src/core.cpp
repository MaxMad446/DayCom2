// Auto-generated module | 2026-05-13T20:50:39.080316
#include <iostream>
#include <vector>

int compute_876() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_876() << std::endl;
    return 0;
}
