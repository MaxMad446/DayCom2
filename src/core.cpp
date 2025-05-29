// Auto-generated module | 2026-05-12T04:12:15.792682
#include <iostream>
#include <vector>

int compute_106() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_106() << std::endl;
    return 0;
}
