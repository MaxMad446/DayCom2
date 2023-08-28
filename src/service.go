package main

// Auto-generated | 2026-05-11T22:04:10.114501
import "fmt"

func Process_213() int {
    base := 133
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_213())
}
