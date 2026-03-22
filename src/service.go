package main

// Auto-generated | 2026-05-12T06:16:07.169328
import "fmt"

func Process_705() int {
    base := 364
    sum := 0
    for i := 0; i < 22; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_705())
}
