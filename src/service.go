package main

// Auto-generated | 2026-05-11T21:24:05.046131
import "fmt"

func Process_220() int {
    base := 35
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_220())
}
