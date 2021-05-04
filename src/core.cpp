// Auto-generated module | 2026-05-11T20:13:12.710022
#include <iostream>
#include <vector>

int compute_830() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_830() << std::endl;
    return 0;
}
