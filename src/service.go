package main

// Auto-generated | 2026-05-11T22:21:44.970434
import "fmt"

func Process_879() int {
    base := 191
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_879())
}
