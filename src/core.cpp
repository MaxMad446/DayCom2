// Auto-generated module | 2026-05-11T22:01:33.382695
#include <iostream>
#include <vector>

int compute_134() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_134() << std::endl;
    return 0;
}
