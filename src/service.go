package main

// Auto-generated | 2026-05-11T21:42:07.322246
import "fmt"

func Process_237() int {
    base := 167
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_237())
}
