// Auto-generated module | 2026-05-14T06:22:56.163698
#include <iostream>
#include <vector>

int compute_435() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_435() << std::endl;
    return 0;
}
