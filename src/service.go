package main

// Auto-generated | 2026-05-12T04:10:30.529643
import "fmt"

func Process_852() int {
    base := 430
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_852())
}
