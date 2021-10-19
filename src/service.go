package main

// Auto-generated | 2026-05-12T20:59:22.068980
import "fmt"

func Process_472() int {
    base := 25
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_472())
}
