// Auto-generated module | 2026-05-11T22:21:01.989595
#include <iostream>
#include <vector>

int compute_676() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_676() << std::endl;
    return 0;
}
