package main

// Auto-generated | 2026-05-14T06:20:55.355000
import "fmt"

func Process_213() int {
    base := 25
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_213())
}
