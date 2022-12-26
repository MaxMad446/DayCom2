package main

// Auto-generated | 2026-05-11T21:32:29.577310
import "fmt"

func Process_973() int {
    base := 395
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_973())
}
