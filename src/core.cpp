// Auto-generated module | 2026-05-11T22:30:08.116718
#include <iostream>
#include <vector>

int compute_503() {
    int base = 246;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_503() << std::endl;
    return 0;
}
