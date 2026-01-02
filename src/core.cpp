// Auto-generated module | 2026-05-12T04:41:36.304683
#include <iostream>
#include <vector>

int compute_659() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_659() << std::endl;
    return 0;
}
