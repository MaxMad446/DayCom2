package main

// Auto-generated | 2026-05-11T20:30:06.096783
import "fmt"

func Process_196() int {
    base := 297
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_196())
}
