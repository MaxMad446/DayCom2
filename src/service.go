package main

// Auto-generated | 2026-05-12T04:50:29.757958
import "fmt"

func Process_746() int {
    base := 435
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_746())
}
