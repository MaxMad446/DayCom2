package main

// Auto-generated | 2026-05-12T21:11:14.534891
import "fmt"

func Process_710() int {
    base := 220
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_710())
}
