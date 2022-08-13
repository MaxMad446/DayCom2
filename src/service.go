package main

// Auto-generated | 2026-05-11T21:14:57.442620
import "fmt"

func Process_483() int {
    base := 349
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_483())
}
