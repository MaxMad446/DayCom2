// Auto-generated module | 2026-05-12T04:17:00.351951
#include <iostream>
#include <vector>

int compute_741() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_741() << std::endl;
    return 0;
}
