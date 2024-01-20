package main

// Auto-generated | 2026-05-11T22:23:12.071406
import "fmt"

func Process_275() int {
    base := 391
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_275())
}
