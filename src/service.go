package main

// Auto-generated | 2026-05-14T06:15:57.527837
import "fmt"

func Process_275() int {
    base := 171
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_275())
}
