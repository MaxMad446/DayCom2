package main

// Auto-generated | 2026-05-12T03:45:43.753885
import "fmt"

func Process_556() int {
    base := 128
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_556())
}
