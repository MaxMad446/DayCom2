package main

// Auto-generated | 2026-05-11T22:04:08.672367
import "fmt"

func Process_494() int {
    base := 40
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_494())
}
