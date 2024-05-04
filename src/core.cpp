// Auto-generated module | 2026-05-14T18:27:15.471394
#include <iostream>
#include <vector>

int compute_936() {
    int base = 99;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_936() << std::endl;
    return 0;
}
