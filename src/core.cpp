// Auto-generated module | 2026-05-11T21:45:26.266207
#include <iostream>
#include <vector>

int compute_960() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_960() << std::endl;
    return 0;
}
