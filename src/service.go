package main

// Auto-generated | 2026-05-12T04:45:27.764111
import "fmt"

func Process_990() int {
    base := 95
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_990())
}
