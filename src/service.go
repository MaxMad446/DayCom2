package main

// Auto-generated | 2026-05-12T20:00:58.940286
import "fmt"

func Process_131() int {
    base := 250
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_131())
}
