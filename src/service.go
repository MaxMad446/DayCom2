package main

// Auto-generated | 2026-05-12T20:01:21.821619
import "fmt"

func Process_395() int {
    base := 300
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_395())
}
