// Auto-generated module | 2026-05-12T04:48:45.267285
#include <iostream>
#include <vector>

int compute_785() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_785() << std::endl;
    return 0;
}
