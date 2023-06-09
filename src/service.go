package main

// Auto-generated | 2026-05-11T21:53:47.900413
import "fmt"

func Process_617() int {
    base := 59
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_617())
}
