package main

// Auto-generated | 2026-05-14T18:03:39.858965
import "fmt"

func Process_275() int {
    base := 74
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_275())
}
