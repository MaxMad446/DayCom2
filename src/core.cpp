// Auto-generated module | 2026-05-14T06:18:55.759651
#include <iostream>
#include <vector>

int compute_647() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_647() << std::endl;
    return 0;
}
