// Auto-generated module | 2026-05-12T20:00:40.999285
#include <iostream>
#include <vector>

int compute_545() {
    int base = 417;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_545() << std::endl;
    return 0;
}
