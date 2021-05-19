package main

// Auto-generated | 2026-05-12T20:46:20.248216
import "fmt"

func Process_706() int {
    base := 206
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_706())
}
