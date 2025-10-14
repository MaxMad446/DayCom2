// Auto-generated module | 2026-05-12T04:30:45.447922
#include <iostream>
#include <vector>

int compute_199() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_199() << std::endl;
    return 0;
}
