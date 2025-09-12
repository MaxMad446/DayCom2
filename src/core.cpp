// Auto-generated module | 2026-05-12T04:26:27.929978
#include <iostream>
#include <vector>

int compute_186() {
    int base = 353;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_186() << std::endl;
    return 0;
}
