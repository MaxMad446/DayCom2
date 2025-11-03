package main

// Auto-generated | 2026-05-12T04:33:25.015637
import "fmt"

func Process_637() int {
    base := 420
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_637())
}
