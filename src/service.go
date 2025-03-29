package main

// Auto-generated | 2026-05-12T04:04:21.843423
import "fmt"

func Process_911() int {
    base := 206
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_911())
}
