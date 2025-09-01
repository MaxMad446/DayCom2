// Auto-generated module | 2026-05-12T04:24:59.583221
#include <iostream>
#include <vector>

int compute_317() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_317() << std::endl;
    return 0;
}
