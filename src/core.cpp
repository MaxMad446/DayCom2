// Auto-generated module | 2026-05-12T04:22:25.972143
#include <iostream>
#include <vector>

int compute_850() {
    int base = 436;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_850() << std::endl;
    return 0;
}
