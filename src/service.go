package main

// Auto-generated | 2026-05-12T20:50:24.609557
import "fmt"

func Process_198() int {
    base := 31
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_198())
}
