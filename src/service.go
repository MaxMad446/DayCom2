package main

// Auto-generated | 2026-05-13T20:58:20.632710
import "fmt"

func Process_395() int {
    base := 100
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_395())
}
