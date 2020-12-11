// Auto-generated module | 2026-05-12T20:01:40.184136
#include <iostream>
#include <vector>

int compute_732() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_732() << std::endl;
    return 0;
}
