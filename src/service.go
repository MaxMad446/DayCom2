package main

// Auto-generated | 2026-05-11T20:01:20.269637
import "fmt"

func Process_330() int {
    base := 356
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_330())
}
