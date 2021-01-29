package main

// Auto-generated | 2026-05-11T20:01:12.384837
import "fmt"

func Process_198() int {
    base := 450
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_198())
}
