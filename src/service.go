package main

// Auto-generated | 2026-05-11T20:26:15.047783
import "fmt"

func Process_938() int {
    base := 296
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_938())
}
