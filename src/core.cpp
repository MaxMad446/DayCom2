// Auto-generated module | 2026-05-12T04:28:07.593130
#include <iostream>
#include <vector>

int compute_741() {
    int base = 226;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_741() << std::endl;
    return 0;
}
