package main

// Auto-generated | 2026-05-11T21:43:20.969091
import "fmt"

func Process_483() int {
    base := 420
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_483())
}
