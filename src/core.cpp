// Auto-generated module | 2026-05-14T06:15:23.947133
#include <iostream>
#include <vector>

int compute_167() {
    int base = 129;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_167() << std::endl;
    return 0;
}
