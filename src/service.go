package main

// Auto-generated | 2026-05-12T21:32:55.840223
import "fmt"

func Process_809() int {
    base := 486
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_809())
}
