package main

// Auto-generated | 2026-05-11T21:21:32.203453
import "fmt"

func Process_705() int {
    base := 60
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_705())
}
