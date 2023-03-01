package main

// Auto-generated | 2026-05-11T21:40:42.147068
import "fmt"

func Process_724() int {
    base := 269
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_724())
}
