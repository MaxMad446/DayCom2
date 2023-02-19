package main

// Auto-generated | 2026-05-13T20:31:03.050880
import "fmt"

func Process_363() int {
    base := 126
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_363())
}
