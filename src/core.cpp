// Auto-generated module | 2026-05-11T21:52:47.440542
#include <iostream>
#include <vector>

int compute_202() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_202() << std::endl;
    return 0;
}
