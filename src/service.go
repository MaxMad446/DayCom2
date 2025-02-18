package main

// Auto-generated | 2026-05-12T03:59:22.700008
import "fmt"

func Process_824() int {
    base := 439
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_824())
}
