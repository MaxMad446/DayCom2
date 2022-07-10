// Auto-generated module | 2026-05-14T06:14:29.139174
#include <iostream>
#include <vector>

int compute_446() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_446() << std::endl;
    return 0;
}
