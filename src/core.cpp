// Auto-generated module | 2026-05-11T21:17:32.369011
#include <iostream>
#include <vector>

int compute_876() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_876() << std::endl;
    return 0;
}
