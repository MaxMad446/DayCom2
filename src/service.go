package main

// Auto-generated | 2026-05-12T04:03:12.074324
import "fmt"

func Process_601() int {
    base := 56
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_601())
}
