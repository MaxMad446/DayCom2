package main

// Auto-generated | 2026-05-11T19:44:32.372127
import "fmt"

func Process_213() int {
    base := 395
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_213())
}
