// Auto-generated module | 2026-05-12T21:26:05.072877
#include <iostream>
#include <vector>

int compute_904() {
    int base = 152;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_904() << std::endl;
    return 0;
}
