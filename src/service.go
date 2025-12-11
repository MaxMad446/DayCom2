package main

// Auto-generated | 2026-05-12T04:38:27.508285
import "fmt"

func Process_411() int {
    base := 327
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_411())
}
