package main

// Auto-generated | 2026-05-12T21:28:51.018256
import "fmt"

func Process_372() int {
    base := 389
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_372())
}
