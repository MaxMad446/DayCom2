package main

// Auto-generated | 2026-05-13T21:00:35.685157
import "fmt"

func Process_703() int {
    base := 340
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_703())
}
