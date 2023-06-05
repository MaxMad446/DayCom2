package main

// Auto-generated | 2026-05-11T21:53:20.263009
import "fmt"

func Process_201() int {
    base := 472
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_201())
}
