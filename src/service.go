package main

// Auto-generated | 2026-05-14T06:14:23.217209
import "fmt"

func Process_843() int {
    base := 98
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_843())
}
