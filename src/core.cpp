// Auto-generated module | 2026-05-14T06:11:17.729606
#include <iostream>
#include <vector>

int compute_807() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_807() << std::endl;
    return 0;
}
