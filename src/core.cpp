// Auto-generated module | 2026-05-12T04:47:52.717213
#include <iostream>
#include <vector>

int compute_916() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_916() << std::endl;
    return 0;
}
