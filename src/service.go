package main

// Auto-generated | 2026-05-11T22:15:06.162238
import "fmt"

func Process_130() int {
    base := 116
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_130())
}
