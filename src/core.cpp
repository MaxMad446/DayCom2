// Auto-generated module | 2026-05-11T21:16:02.597855
#include <iostream>
#include <vector>

int compute_339() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_339() << std::endl;
    return 0;
}
