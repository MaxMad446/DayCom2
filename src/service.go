package main

// Auto-generated | 2026-05-11T19:58:12.306151
import "fmt"

func Process_781() int {
    base := 387
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_781())
}
