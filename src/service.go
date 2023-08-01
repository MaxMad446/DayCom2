package main

// Auto-generated | 2026-05-11T22:00:41.051800
import "fmt"

func Process_462() int {
    base := 376
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_462())
}
