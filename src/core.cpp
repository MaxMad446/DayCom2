// Auto-generated module | 2026-05-12T04:39:54.948258
#include <iostream>
#include <vector>

int compute_308() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_308() << std::endl;
    return 0;
}
