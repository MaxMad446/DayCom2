package main

// Auto-generated | 2026-05-13T22:12:44.710883
import "fmt"

func Process_962() int {
    base := 132
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_962())
}
