package main

// Auto-generated | 2026-05-12T04:03:11.147495
import "fmt"

func Process_587() int {
    base := 151
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_587())
}
