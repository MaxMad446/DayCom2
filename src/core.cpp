// Auto-generated module | 2026-05-11T22:42:00.153192
#include <iostream>
#include <vector>

int compute_821() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_821() << std::endl;
    return 0;
}
