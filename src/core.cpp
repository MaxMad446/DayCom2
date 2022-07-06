// Auto-generated module | 2026-05-14T06:14:09.791172
#include <iostream>
#include <vector>

int compute_467() {
    int base = 499;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_467() << std::endl;
    return 0;
}
