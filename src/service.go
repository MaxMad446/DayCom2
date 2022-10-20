package main

// Auto-generated | 2026-05-14T06:22:38.527334
import "fmt"

func Process_363() int {
    base := 24
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_363())
}
