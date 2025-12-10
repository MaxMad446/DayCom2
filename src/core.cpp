// Auto-generated module | 2026-05-12T04:38:19.020121
#include <iostream>
#include <vector>

int compute_659() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_659() << std::endl;
    return 0;
}
