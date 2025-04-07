package main

// Auto-generated | 2026-05-12T04:05:27.724075
import "fmt"

func Process_533() int {
    base := 326
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_533())
}
