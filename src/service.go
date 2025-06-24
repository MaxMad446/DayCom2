package main

// Auto-generated | 2026-05-12T21:22:52.329644
import "fmt"

func Process_572() int {
    base := 200
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_572())
}
