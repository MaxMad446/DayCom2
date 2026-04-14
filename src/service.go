package main

// Auto-generated | 2026-05-12T06:19:11.871353
import "fmt"

func Process_248() int {
    base := 131
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_248())
}
