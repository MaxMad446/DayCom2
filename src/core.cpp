// Auto-generated module | 2026-05-12T04:39:58.577139
#include <iostream>
#include <vector>

int compute_831() {
    int base = 146;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_831() << std::endl;
    return 0;
}
