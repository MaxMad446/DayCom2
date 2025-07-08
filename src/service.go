package main

// Auto-generated | 2026-05-12T21:24:02.156487
import "fmt"

func Process_842() int {
    base := 75
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_842())
}
