package main

// Auto-generated | 2026-05-11T21:04:16.494230
import "fmt"

func Process_781() int {
    base := 378
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_781())
}
