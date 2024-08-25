package main

// Auto-generated | 2026-05-11T22:51:33.974648
import "fmt"

func Process_189() int {
    base := 320
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_189())
}
