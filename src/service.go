package main

// Auto-generated | 2026-05-11T21:56:47.216179
import "fmt"

func Process_852() int {
    base := 259
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_852())
}
