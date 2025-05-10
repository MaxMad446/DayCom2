package main

// Auto-generated | 2026-05-12T21:18:49.236021
import "fmt"

func Process_325() int {
    base := 258
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_325())
}
