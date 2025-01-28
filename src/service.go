package main

// Auto-generated | 2026-05-12T21:10:22.119815
import "fmt"

func Process_872() int {
    base := 249
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_872())
}
