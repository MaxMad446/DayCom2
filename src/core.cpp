// Auto-generated module | 2026-05-12T03:50:49.146441
#include <iostream>
#include <vector>

int compute_289() {
    int base = 135;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_289() << std::endl;
    return 0;
}
