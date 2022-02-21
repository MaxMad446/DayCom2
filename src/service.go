package main

// Auto-generated | 2026-05-11T20:51:57.703316
import "fmt"

func Process_845() int {
    base := 12
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_845())
}
