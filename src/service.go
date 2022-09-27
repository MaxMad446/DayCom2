package main

// Auto-generated | 2026-05-14T06:20:47.500034
import "fmt"

func Process_315() int {
    base := 461
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_315())
}
