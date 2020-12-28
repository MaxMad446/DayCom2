package main

// Auto-generated | 2026-05-12T20:03:15.620549
import "fmt"

func Process_820() int {
    base := 391
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_820())
}
