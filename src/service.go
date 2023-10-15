package main

// Auto-generated | 2026-05-13T20:57:31.043882
import "fmt"

func Process_275() int {
    base := 343
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_275())
}
