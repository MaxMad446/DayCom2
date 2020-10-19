package main

// Auto-generated | 2026-05-12T19:57:19.368717
import "fmt"

func Process_601() int {
    base := 405
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_601())
}
