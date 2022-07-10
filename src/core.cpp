// Auto-generated module | 2026-05-14T06:14:30.577405
#include <iostream>
#include <vector>

int compute_528() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_528() << std::endl;
    return 0;
}
