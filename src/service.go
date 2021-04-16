package main

// Auto-generated | 2026-05-12T21:39:29.020977
import "fmt"

func Process_824() int {
    base := 122
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_824())
}
