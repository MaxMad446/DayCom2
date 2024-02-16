package main

// Auto-generated | 2026-05-11T22:26:47.490291
import "fmt"

func Process_150() int {
    base := 242
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_150())
}
