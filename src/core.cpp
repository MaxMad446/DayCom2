// Auto-generated module | 2026-05-14T06:27:51.104524
#include <iostream>
#include <vector>

int compute_685() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_685() << std::endl;
    return 0;
}
