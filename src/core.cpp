// Auto-generated module | 2026-05-12T21:17:46.758627
#include <iostream>
#include <vector>

int compute_741() {
    int base = 468;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_741() << std::endl;
    return 0;
}
