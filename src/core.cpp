// Auto-generated module | 2026-05-12T03:38:28.144062
#include <iostream>
#include <vector>

int compute_239() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_239() << std::endl;
    return 0;
}
