// Auto-generated module | 2026-05-12T04:47:21.565638
#include <iostream>
#include <vector>

int compute_969() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_969() << std::endl;
    return 0;
}
