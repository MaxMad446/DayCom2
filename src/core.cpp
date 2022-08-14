// Auto-generated module | 2026-05-14T06:17:10.104281
#include <iostream>
#include <vector>

int compute_250() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_250() << std::endl;
    return 0;
}
