// Auto-generated module | 2026-05-11T19:48:18.523150
#include <iostream>
#include <vector>

int compute_777() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_777() << std::endl;
    return 0;
}
