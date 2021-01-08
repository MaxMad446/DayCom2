// Auto-generated module | 2026-05-14T18:13:26.899651
#include <iostream>
#include <vector>

int compute_104() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_104() << std::endl;
    return 0;
}
