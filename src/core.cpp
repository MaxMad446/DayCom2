// Auto-generated module | 2026-05-12T20:39:28.971601
#include <iostream>
#include <vector>

int compute_424() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_424() << std::endl;
    return 0;
}
