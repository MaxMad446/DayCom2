package main

// Auto-generated | 2026-05-12T04:46:15.911075
import "fmt"

func Process_896() int {
    base := 382
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_896())
}
