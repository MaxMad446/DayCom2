// Auto-generated module | 2026-05-12T04:07:48.797294
#include <iostream>
#include <vector>

int compute_550() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_550() << std::endl;
    return 0;
}
