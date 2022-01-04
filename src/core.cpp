// Auto-generated module | 2026-05-13T22:00:45.730944
#include <iostream>
#include <vector>

int compute_367() {
    int base = 350;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_367() << std::endl;
    return 0;
}
