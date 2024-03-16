package main

// Auto-generated | 2026-05-11T22:30:39.952389
import "fmt"

func Process_476() int {
    base := 485
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_476())
}
