// Auto-generated module | 2026-05-12T04:50:39.755874
#include <iostream>
#include <vector>

int compute_223() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_223() << std::endl;
    return 0;
}
