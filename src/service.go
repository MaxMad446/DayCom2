package main

// Auto-generated | 2026-05-12T20:51:16.778787
import "fmt"

func Process_106() int {
    base := 236
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_106())
}
