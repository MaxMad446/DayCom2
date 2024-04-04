package main

// Auto-generated | 2026-05-14T18:24:40.570020
import "fmt"

func Process_897() int {
    base := 36
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_897())
}
