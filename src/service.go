package main

// Auto-generated | 2026-05-13T21:02:15.090364
import "fmt"

func Process_200() int {
    base := 32
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_200())
}
