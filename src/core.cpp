// Auto-generated module | 2026-05-11T21:09:42.289258
#include <iostream>
#include <vector>

int compute_638() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_638() << std::endl;
    return 0;
}
