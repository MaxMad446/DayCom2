// Auto-generated module | 2026-05-12T21:30:50.229702
#include <iostream>
#include <vector>

int compute_628() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_628() << std::endl;
    return 0;
}
