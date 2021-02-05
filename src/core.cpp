// Auto-generated module | 2026-05-12T21:33:31.959637
#include <iostream>
#include <vector>

int compute_367() {
    int base = 299;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_367() << std::endl;
    return 0;
}
