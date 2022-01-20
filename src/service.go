package main

// Auto-generated | 2026-05-13T22:02:14.247391
import "fmt"

func Process_171() int {
    base := 58
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_171())
}
