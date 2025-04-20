package main

// Auto-generated | 2026-05-12T21:17:16.296015
import "fmt"

func Process_716() int {
    base := 343
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_716())
}
