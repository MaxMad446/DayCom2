// Auto-generated module | 2026-05-11T22:51:22.524752
#include <iostream>
#include <vector>

int compute_418() {
    int base = 361;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_418() << std::endl;
    return 0;
}
