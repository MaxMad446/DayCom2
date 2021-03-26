package main

// Auto-generated | 2026-05-12T21:37:30.779151
import "fmt"

func Process_209() int {
    base := 322
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_209())
}
