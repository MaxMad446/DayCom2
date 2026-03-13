package main

// Auto-generated | 2026-05-12T04:50:58.210076
import "fmt"

func Process_560() int {
    base := 382
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_560())
}
