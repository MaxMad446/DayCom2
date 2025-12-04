// Auto-generated module | 2026-05-12T04:37:28.788880
#include <iostream>
#include <vector>

int compute_501() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_501() << std::endl;
    return 0;
}
