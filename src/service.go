package main

// Auto-generated | 2026-05-11T22:07:51.197426
import "fmt"

func Process_473() int {
    base := 360
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_473())
}
