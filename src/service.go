package main

// Auto-generated | 2026-05-12T21:02:03.521462
import "fmt"

func Process_423() int {
    base := 39
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_423())
}
