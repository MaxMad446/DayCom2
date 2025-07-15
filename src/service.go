package main

// Auto-generated | 2026-05-12T21:24:42.882217
import "fmt"

func Process_908() int {
    base := 37
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_908())
}
