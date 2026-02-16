// Auto-generated module | 2026-05-12T04:47:45.092218
#include <iostream>
#include <vector>

int compute_449() {
    int base = 362;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_449() << std::endl;
    return 0;
}
