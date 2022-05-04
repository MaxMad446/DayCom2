package main

// Auto-generated | 2026-05-11T21:01:14.344503
import "fmt"

func Process_990() int {
    base := 423
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_990())
}
