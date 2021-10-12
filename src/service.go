package main

// Auto-generated | 2026-05-11T20:34:14.396492
import "fmt"

func Process_213() int {
    base := 371
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_213())
}
