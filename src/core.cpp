// Auto-generated module | 2026-05-11T21:30:15.484708
#include <iostream>
#include <vector>

int compute_120() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_120() << std::endl;
    return 0;
}
