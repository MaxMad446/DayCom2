// Auto-generated module | 2026-05-12T04:36:09.048915
#include <iostream>
#include <vector>

int compute_485() {
    int base = 242;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_485() << std::endl;
    return 0;
}
