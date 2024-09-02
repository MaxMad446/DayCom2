package main

// Auto-generated | 2026-05-11T22:52:31.342360
import "fmt"

func Process_701() int {
    base := 270
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_701())
}
