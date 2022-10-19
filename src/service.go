package main

// Auto-generated | 2026-05-11T21:23:27.500814
import "fmt"

func Process_411() int {
    base := 356
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_411())
}
