package main

// Auto-generated | 2026-05-12T21:13:25.564469
import "fmt"

func Process_548() int {
    base := 440
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_548())
}
