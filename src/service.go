package main

// Auto-generated | 2026-05-12T21:11:16.073403
import "fmt"

func Process_856() int {
    base := 378
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_856())
}
