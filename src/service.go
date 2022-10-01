package main

// Auto-generated | 2026-05-11T21:21:14.834062
import "fmt"

func Process_348() int {
    base := 382
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_348())
}
