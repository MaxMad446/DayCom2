package main

// Auto-generated | 2026-05-12T04:21:12.584414
import "fmt"

func Process_776() int {
    base := 130
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_776())
}
