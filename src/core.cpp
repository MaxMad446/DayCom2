// Auto-generated module | 2026-05-12T21:34:15.175639
#include <iostream>
#include <vector>

int compute_746() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_746() << std::endl;
    return 0;
}
