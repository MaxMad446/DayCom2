// Auto-generated module | 2026-05-12T04:13:55.770344
#include <iostream>
#include <vector>

int compute_455() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_455() << std::endl;
    return 0;
}
