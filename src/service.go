package main

// Auto-generated | 2026-05-11T20:36:42.629880
import "fmt"

func Process_135() int {
    base := 265
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_135())
}
