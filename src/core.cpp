// Auto-generated module | 2026-05-12T06:19:21.852062
#include <iostream>
#include <vector>

int compute_747() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_747() << std::endl;
    return 0;
}
