// Auto-generated module | 2026-05-14T06:16:59.284837
#include <iostream>
#include <vector>

int compute_874() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_874() << std::endl;
    return 0;
}
