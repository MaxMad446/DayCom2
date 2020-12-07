// Auto-generated module | 2026-05-11T19:54:15.595986
#include <iostream>
#include <vector>

int compute_831() {
    int base = 238;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_831() << std::endl;
    return 0;
}
