package main

// Auto-generated | 2026-05-12T21:39:37.336002
import "fmt"

func Process_102() int {
    base := 416
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_102())
}
