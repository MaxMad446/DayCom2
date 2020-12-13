// Auto-generated module | 2026-05-12T20:01:52.041877
#include <iostream>
#include <vector>

int compute_371() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
