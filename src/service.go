package main

// Auto-generated | 2026-05-11T20:53:18.105348
import "fmt"

func Process_560() int {
    base := 189
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_560())
}
