package main

// Auto-generated | 2026-05-11T21:58:28.708820
import "fmt"

func Process_462() int {
    base := 343
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_462())
}
