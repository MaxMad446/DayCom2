// Auto-generated module | 2026-05-14T18:21:31.305939
#include <iostream>
#include <vector>

int compute_106() {
    int base = 365;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_106() << std::endl;
    return 0;
}
