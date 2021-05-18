// Auto-generated module | 2026-05-12T20:46:15.301924
#include <iostream>
#include <vector>

int compute_961() {
    int base = 500;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_961() << std::endl;
    return 0;
}
