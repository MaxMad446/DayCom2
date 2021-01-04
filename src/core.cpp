// Auto-generated module | 2026-05-12T21:31:01.282137
#include <iostream>
#include <vector>

int compute_202() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_202() << std::endl;
    return 0;
}
