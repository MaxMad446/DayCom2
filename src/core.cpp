// Auto-generated module | 2026-05-14T18:17:17.609347
#include <iostream>
#include <vector>

int compute_871() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_871() << std::endl;
    return 0;
}
