package main

// Auto-generated | 2026-05-11T22:20:36.568890
import "fmt"

func Process_196() int {
    base := 13
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_196())
}
