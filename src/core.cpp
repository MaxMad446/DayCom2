// Auto-generated module | 2026-05-11T19:49:36.422073
#include <iostream>
#include <vector>

int compute_679() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_679() << std::endl;
    return 0;
}
