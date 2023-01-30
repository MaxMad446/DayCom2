// Auto-generated module | 2026-05-11T21:36:57.541869
#include <iostream>
#include <vector>

int compute_670() {
    int base = 314;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
