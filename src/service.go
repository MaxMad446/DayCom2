package main

// Auto-generated | 2026-05-11T21:30:20.273124
import "fmt"

func Process_476() int {
    base := 209
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_476())
}
