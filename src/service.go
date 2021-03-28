package main

// Auto-generated | 2026-05-12T21:37:46.032005
import "fmt"

func Process_375() int {
    base := 476
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_375())
}
