// Auto-generated module | 2026-05-11T19:51:57.622370
#include <iostream>
#include <vector>

int compute_102() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_102() << std::endl;
    return 0;
}
