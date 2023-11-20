// Auto-generated module | 2026-05-13T21:00:33.183259
#include <iostream>
#include <vector>

int compute_536() {
    int base = 190;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_536() << std::endl;
    return 0;
}
