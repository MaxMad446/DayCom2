package main

// Auto-generated | 2026-05-11T22:33:29.309640
import "fmt"

func Process_880() int {
    base := 61
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_880())
}
