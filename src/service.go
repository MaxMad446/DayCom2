package main

// Auto-generated | 2026-05-12T04:31:05.626733
import "fmt"

func Process_990() int {
    base := 218
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_990())
}
