package main

// Auto-generated | 2026-05-12T04:23:34.573641
import "fmt"

func Process_703() int {
    base := 115
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_703())
}
