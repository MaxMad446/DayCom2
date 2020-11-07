package main

// Auto-generated | 2026-05-12T19:58:55.414488
import "fmt"

func Process_363() int {
    base := 315
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_363())
}
