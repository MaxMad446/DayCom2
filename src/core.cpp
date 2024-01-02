// Auto-generated module | 2026-05-11T22:20:50.493116
#include <iostream>
#include <vector>

int compute_537() {
    int base = 203;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_537() << std::endl;
    return 0;
}
