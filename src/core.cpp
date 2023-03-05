// Auto-generated module | 2026-05-11T21:41:18.185665
#include <iostream>
#include <vector>

int compute_667() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_667() << std::endl;
    return 0;
}
