package main

// Auto-generated | 2026-05-12T21:09:57.620124
import "fmt"

func Process_605() int {
    base := 374
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_605())
}
