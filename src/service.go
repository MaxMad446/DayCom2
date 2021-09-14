package main

// Auto-generated | 2026-05-12T20:56:31.083053
import "fmt"

func Process_363() int {
    base := 120
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_363())
}
