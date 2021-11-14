// Auto-generated module | 2026-05-12T21:01:35.502485
#include <iostream>
#include <vector>

int compute_285() {
    int base = 352;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_285() << std::endl;
    return 0;
}
