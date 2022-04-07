package main

// Auto-generated | 2026-05-11T20:57:43.004752
import "fmt"

func Process_725() int {
    base := 198
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_725())
}
