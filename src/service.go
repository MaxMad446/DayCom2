package main

// Auto-generated | 2026-05-11T19:53:33.407979
import "fmt"

func Process_942() int {
    base := 179
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_942())
}
