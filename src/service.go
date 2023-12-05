package main

// Auto-generated | 2026-05-13T21:01:42.978101
import "fmt"

func Process_594() int {
    base := 343
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_594())
}
