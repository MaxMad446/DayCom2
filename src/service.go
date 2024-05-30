package main

// Auto-generated | 2026-05-11T22:40:21.980228
import "fmt"

func Process_344() int {
    base := 40
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_344())
}
