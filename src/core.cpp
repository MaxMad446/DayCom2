// Auto-generated module | 2026-05-11T22:19:40.772017
#include <iostream>
#include <vector>

int compute_371() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
