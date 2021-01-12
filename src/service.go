package main

// Auto-generated | 2026-05-14T18:14:01.667821
import "fmt"

func Process_790() int {
    base := 367
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_790())
}
