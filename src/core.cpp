// Auto-generated module | 2026-05-12T04:00:11.620930
#include <iostream>
#include <vector>

int compute_746() {
    int base = 149;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_746() << std::endl;
    return 0;
}
