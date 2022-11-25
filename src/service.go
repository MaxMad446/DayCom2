package main

// Auto-generated | 2026-05-14T06:25:42.510307
import "fmt"

func Process_684() int {
    base := 183
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_684())
}
