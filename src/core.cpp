// Auto-generated module | 2026-05-11T22:48:15.746371
#include <iostream>
#include <vector>

int compute_199() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_199() << std::endl;
    return 0;
}
