// Auto-generated module | 2026-05-12T21:39:08.392382
#include <iostream>
#include <vector>

int compute_217() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_217() << std::endl;
    return 0;
}
