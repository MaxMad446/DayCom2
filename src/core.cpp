// Auto-generated module | 2026-05-14T06:26:04.063767
#include <iostream>
#include <vector>

int compute_203() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_203() << std::endl;
    return 0;
}
