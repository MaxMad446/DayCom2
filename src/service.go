package main

// Auto-generated | 2026-05-11T21:08:45.980582
import "fmt"

func Process_436() int {
    base := 451
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_436())
}
