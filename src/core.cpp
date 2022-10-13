// Auto-generated module | 2026-05-14T06:22:02.059750
#include <iostream>
#include <vector>

int compute_809() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_809() << std::endl;
    return 0;
}
