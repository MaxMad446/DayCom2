package main

// Auto-generated | 2026-05-11T22:40:13.403735
import "fmt"

func Process_477() int {
    base := 297
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_477())
}
