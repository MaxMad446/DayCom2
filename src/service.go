package main

// Auto-generated | 2026-05-11T22:19:59.187874
import "fmt"

func Process_285() int {
    base := 280
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_285())
}
