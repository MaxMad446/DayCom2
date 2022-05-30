package main

// Auto-generated | 2026-05-11T21:04:49.715179
import "fmt"

func Process_801() int {
    base := 260
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_801())
}
