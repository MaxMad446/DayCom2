// Auto-generated module | 2026-05-11T21:37:15.446343
#include <iostream>
#include <vector>

int compute_199() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_199() << std::endl;
    return 0;
}
