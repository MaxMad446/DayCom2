// Auto-generated module | 2026-05-13T21:03:48.996316
#include <iostream>
#include <vector>

int compute_963() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_963() << std::endl;
    return 0;
}
