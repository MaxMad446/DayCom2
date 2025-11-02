// Auto-generated module | 2026-05-12T04:33:18.271369
#include <iostream>
#include <vector>

int compute_430() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_430() << std::endl;
    return 0;
}
