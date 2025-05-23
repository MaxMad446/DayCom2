// Auto-generated module | 2026-05-12T04:11:38.998461
#include <iostream>
#include <vector>

int compute_308() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_308() << std::endl;
    return 0;
}
