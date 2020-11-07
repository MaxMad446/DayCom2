// Auto-generated module | 2026-05-11T19:50:24.083724
#include <iostream>
#include <vector>

int compute_877() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_877() << std::endl;
    return 0;
}
