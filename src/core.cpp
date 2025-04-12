// Auto-generated module | 2026-05-12T04:06:06.643675
#include <iostream>
#include <vector>

int compute_986() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_986() << std::endl;
    return 0;
}
