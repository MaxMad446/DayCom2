// Auto-generated module | 2026-05-11T19:52:41.369269
#include <iostream>
#include <vector>

int compute_331() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_331() << std::endl;
    return 0;
}
