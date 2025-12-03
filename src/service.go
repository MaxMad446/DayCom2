package main

// Auto-generated | 2026-05-12T04:37:20.642014
import "fmt"

func Process_395() int {
    base := 61
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_395())
}
