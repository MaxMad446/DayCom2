// Auto-generated module | 2026-05-11T22:35:21.206637
#include <iostream>
#include <vector>

int compute_771() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_771() << std::endl;
    return 0;
}
