// Auto-generated module | 2026-05-13T20:29:50.488298
#include <iostream>
#include <vector>

int compute_628() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_628() << std::endl;
    return 0;
}
