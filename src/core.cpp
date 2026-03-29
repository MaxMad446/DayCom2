// Auto-generated module | 2026-05-12T06:17:00.258318
#include <iostream>
#include <vector>

int compute_500() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_500() << std::endl;
    return 0;
}
