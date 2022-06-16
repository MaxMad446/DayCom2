package main

// Auto-generated | 2026-05-11T21:06:58.728697
import "fmt"

func Process_902() int {
    base := 103
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_902())
}
