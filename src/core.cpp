// Auto-generated module | 2026-05-11T21:21:14.834385
#include <iostream>
#include <vector>

int compute_598() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}
