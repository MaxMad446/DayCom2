// Auto-generated module | 2026-05-11T21:00:50.716312
#include <iostream>
#include <vector>

int compute_726() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_726() << std::endl;
    return 0;
}
