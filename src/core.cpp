// Auto-generated module | 2026-05-12T04:02:18.994545
#include <iostream>
#include <vector>

int compute_620() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_620() << std::endl;
    return 0;
}
