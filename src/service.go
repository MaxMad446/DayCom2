package main

// Auto-generated | 2026-05-11T22:48:06.087073
import "fmt"

func Process_466() int {
    base := 488
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_466())
}
