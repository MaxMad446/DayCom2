// Auto-generated module | 2026-05-12T04:32:54.833950
#include <iostream>
#include <vector>

int compute_536() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_536() << std::endl;
    return 0;
}
