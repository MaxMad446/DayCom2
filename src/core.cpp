// Auto-generated module | 2026-05-11T21:11:14.052787
#include <iostream>
#include <vector>

int compute_629() {
    int base = 466;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_629() << std::endl;
    return 0;
}
