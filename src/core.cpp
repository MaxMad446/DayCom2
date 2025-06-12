// Auto-generated module | 2026-05-12T04:14:02.504698
#include <iostream>
#include <vector>

int compute_862() {
    int base = 312;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_862() << std::endl;
    return 0;
}
