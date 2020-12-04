// Auto-generated module | 2026-05-11T19:53:51.569383
#include <iostream>
#include <vector>

int compute_566() {
    int base = 155;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_566() << std::endl;
    return 0;
}
