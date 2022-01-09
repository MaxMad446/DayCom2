// Auto-generated module | 2026-05-13T22:01:12.980007
#include <iostream>
#include <vector>

int compute_598() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}
