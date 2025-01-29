package main

// Auto-generated | 2026-05-12T21:10:28.857521
import "fmt"

func Process_363() int {
    base := 92
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_363())
}
