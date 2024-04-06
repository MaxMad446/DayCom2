// Auto-generated module | 2026-05-11T22:33:21.677179
#include <iostream>
#include <vector>

int compute_461() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_461() << std::endl;
    return 0;
}
