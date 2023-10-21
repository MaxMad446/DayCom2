package main

// Auto-generated | 2026-05-13T20:57:59.595023
import "fmt"

func Process_342() int {
    base := 404
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_342())
}
