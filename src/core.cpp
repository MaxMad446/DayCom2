// Auto-generated module | 2026-05-11T21:11:58.430256
#include <iostream>
#include <vector>

int compute_628() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_628() << std::endl;
    return 0;
}
