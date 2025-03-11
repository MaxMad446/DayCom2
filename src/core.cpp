// Auto-generated module | 2026-05-12T21:13:56.546951
#include <iostream>
#include <vector>

int compute_815() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_815() << std::endl;
    return 0;
}
