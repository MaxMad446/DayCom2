// Auto-generated module | 2026-05-12T04:32:21.963104
#include <iostream>
#include <vector>

int compute_131() {
    int base = 276;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_131() << std::endl;
    return 0;
}
