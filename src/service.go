package main

// Auto-generated | 2026-05-12T21:16:18.993743
import "fmt"

func Process_203() int {
    base := 398
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_203())
}
