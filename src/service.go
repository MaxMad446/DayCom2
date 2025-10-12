package main

// Auto-generated | 2026-05-12T04:30:23.038516
import "fmt"

func Process_967() int {
    base := 347
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_967())
}
