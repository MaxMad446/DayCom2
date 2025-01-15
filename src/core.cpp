// Auto-generated module | 2026-05-12T21:09:13.043709
#include <iostream>
#include <vector>

int compute_389() {
    int base = 449;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_389() << std::endl;
    return 0;
}
