// Auto-generated module | 2026-05-12T04:50:08.258789
#include <iostream>
#include <vector>

int compute_969() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_969() << std::endl;
    return 0;
}
