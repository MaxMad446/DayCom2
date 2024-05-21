package main

// Auto-generated | 2026-05-11T22:39:18.780730
import "fmt"

func Process_631() int {
    base := 387
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_631())
}
