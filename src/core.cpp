// Auto-generated module | 2026-05-12T04:35:40.832991
#include <iostream>
#include <vector>

int compute_798() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_798() << std::endl;
    return 0;
}
