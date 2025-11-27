package main

// Auto-generated | 2026-05-12T04:36:25.451859
import "fmt"

func Process_139() int {
    base := 460
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_139())
}
