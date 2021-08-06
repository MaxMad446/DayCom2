package main

// Auto-generated | 2026-05-12T20:52:54.367909
import "fmt"

func Process_880() int {
    base := 249
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_880())
}
