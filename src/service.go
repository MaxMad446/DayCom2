package main

// Auto-generated | 2026-05-12T20:54:13.826746
import "fmt"

func Process_770() int {
    base := 13
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_770())
}
