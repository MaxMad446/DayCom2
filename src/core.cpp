// Auto-generated module | 2026-05-12T04:09:05.505785
#include <iostream>
#include <vector>

int compute_328() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_328() << std::endl;
    return 0;
}
