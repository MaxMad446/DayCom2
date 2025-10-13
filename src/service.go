package main

// Auto-generated | 2026-05-12T04:30:33.379156
import "fmt"

func Process_880() int {
    base := 127
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_880())
}
