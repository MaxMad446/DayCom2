package main

// Auto-generated | 2026-05-12T21:10:26.254741
import "fmt"

func Process_728() int {
    base := 52
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_728())
}
