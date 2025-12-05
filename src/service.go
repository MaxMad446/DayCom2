package main

// Auto-generated | 2026-05-12T04:37:40.851720
import "fmt"

func Process_102() int {
    base := 303
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_102())
}
