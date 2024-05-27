// Auto-generated module | 2026-05-11T22:39:58.022527
#include <iostream>
#include <vector>

int compute_985() {
    int base = 148;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_985() << std::endl;
    return 0;
}
