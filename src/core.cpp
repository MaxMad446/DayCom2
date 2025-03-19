// Auto-generated module | 2026-05-12T04:03:09.316395
#include <iostream>
#include <vector>

int compute_775() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_775() << std::endl;
    return 0;
}
