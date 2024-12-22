package main

// Auto-generated | 2026-05-12T03:51:36.714149
import "fmt"

func Process_824() int {
    base := 286
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_824())
}
