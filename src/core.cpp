// Auto-generated module | 2026-05-12T04:04:21.843742
#include <iostream>
#include <vector>

int compute_346() {
    int base = 111;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_346() << std::endl;
    return 0;
}
