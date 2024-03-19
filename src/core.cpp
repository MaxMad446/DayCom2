// Auto-generated module | 2026-05-14T18:23:29.724099
#include <iostream>
#include <vector>

int compute_853() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_853() << std::endl;
    return 0;
}
