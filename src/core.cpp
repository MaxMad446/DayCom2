// Auto-generated module | 2026-05-12T21:13:55.549949
#include <iostream>
#include <vector>

int compute_661() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_661() << std::endl;
    return 0;
}
