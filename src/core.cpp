// Auto-generated module | 2026-05-12T04:47:26.823474
#include <iostream>
#include <vector>

int compute_305() {
    int base = 44;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_305() << std::endl;
    return 0;
}
