package main

// Auto-generated | 2026-05-14T18:21:50.679727
import "fmt"

func Process_126() int {
    base := 181
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_126())
}
