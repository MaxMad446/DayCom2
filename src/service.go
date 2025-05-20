package main

// Auto-generated | 2026-05-12T04:11:20.792322
import "fmt"

func Process_891() int {
    base := 129
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_891())
}
