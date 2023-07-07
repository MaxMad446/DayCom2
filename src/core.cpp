// Auto-generated module | 2026-05-11T21:57:41.222478
#include <iostream>
#include <vector>

int compute_137() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_137() << std::endl;
    return 0;
}
