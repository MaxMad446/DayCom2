// Auto-generated module | 2026-05-12T21:25:00.083783
#include <iostream>
#include <vector>

int compute_225() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_225() << std::endl;
    return 0;
}
