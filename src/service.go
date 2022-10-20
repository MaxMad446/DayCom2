package main

// Auto-generated | 2026-05-14T06:22:41.042275
import "fmt"

func Process_749() int {
    base := 58
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_749())
}
