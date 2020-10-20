package main

// Auto-generated | 2026-05-14T18:02:28.194700
import "fmt"

func Process_252() int {
    base := 297
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_252())
}
