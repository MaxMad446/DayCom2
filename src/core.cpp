// Auto-generated module | 2026-05-12T04:15:50.611325
#include <iostream>
#include <vector>

int compute_415() {
    int base = 79;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_415() << std::endl;
    return 0;
}
