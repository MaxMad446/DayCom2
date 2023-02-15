// Auto-generated module | 2026-05-11T21:38:52.331054
#include <iostream>
#include <vector>

int compute_684() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_684() << std::endl;
    return 0;
}
