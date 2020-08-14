// Auto-generated module | 2026-05-11T19:39:02.022118
#include <iostream>
#include <vector>

int compute_989() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_989() << std::endl;
    return 0;
}
