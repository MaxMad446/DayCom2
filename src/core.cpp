// Auto-generated module | 2026-05-12T21:25:05.477581
#include <iostream>
#include <vector>

int compute_467() {
    int base = 165;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_467() << std::endl;
    return 0;
}
