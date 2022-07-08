// Auto-generated module | 2026-05-14T06:14:21.706879
#include <iostream>
#include <vector>

int compute_482() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_482() << std::endl;
    return 0;
}
