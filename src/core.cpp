// Auto-generated module | 2026-05-14T18:09:47.075678
#include <iostream>
#include <vector>

int compute_869() {
    int base = 337;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_869() << std::endl;
    return 0;
}
