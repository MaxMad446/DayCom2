package main

// Auto-generated | 2026-05-12T06:19:13.312234
import "fmt"

func Process_256() int {
    base := 148
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_256())
}
