// Auto-generated module | 2026-05-12T04:10:52.724683
#include <iostream>
#include <vector>

int compute_276() {
    int base = 421;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_276() << std::endl;
    return 0;
}
