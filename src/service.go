package main

// Auto-generated | 2026-05-12T21:12:45.868255
import "fmt"

func Process_809() int {
    base := 210
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_809())
}
