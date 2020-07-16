// Auto-generated module | 2026-05-11T19:35:16.006405
#include <iostream>
#include <vector>

int compute_695() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_695() << std::endl;
    return 0;
}
