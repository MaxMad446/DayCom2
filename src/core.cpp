// Auto-generated module | 2026-05-11T20:15:46.137501
#include <iostream>
#include <vector>

int compute_695() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_695() << std::endl;
    return 0;
}
