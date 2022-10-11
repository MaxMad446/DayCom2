// Auto-generated module | 2026-05-14T06:21:55.590047
#include <iostream>
#include <vector>

int compute_730() {
    int base = 477;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_730() << std::endl;
    return 0;
}
