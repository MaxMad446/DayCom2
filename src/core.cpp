// Auto-generated module | 2026-05-11T22:39:01.296850
#include <iostream>
#include <vector>

int compute_500() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_500() << std::endl;
    return 0;
}
