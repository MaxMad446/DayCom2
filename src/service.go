package main

// Auto-generated | 2026-05-12T21:23:39.154058
import "fmt"

func Process_609() int {
    base := 340
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_609())
}
