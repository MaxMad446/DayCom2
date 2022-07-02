// Auto-generated module | 2026-05-14T06:13:50.888589
#include <iostream>
#include <vector>

int compute_537() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_537() << std::endl;
    return 0;
}
