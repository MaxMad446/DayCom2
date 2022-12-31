// Auto-generated module | 2026-05-14T06:28:44.917109
#include <iostream>
#include <vector>

int compute_367() {
    int base = 389;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_367() << std::endl;
    return 0;
}
