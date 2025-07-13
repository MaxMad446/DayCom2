// Auto-generated module | 2026-05-12T04:18:15.557951
#include <iostream>
#include <vector>

int compute_855() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_855() << std::endl;
    return 0;
}
