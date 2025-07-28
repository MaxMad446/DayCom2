package main

// Auto-generated | 2026-05-12T04:20:16.476550
import "fmt"

func Process_833() int {
    base := 110
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_833())
}
