// Auto-generated module | 2026-05-12T21:39:58.471398
#include <iostream>
#include <vector>

int compute_766() {
    int base = 114;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_766() << std::endl;
    return 0;
}
