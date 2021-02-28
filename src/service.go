package main

// Auto-generated | 2026-05-12T20:39:46.581663
import "fmt"

func Process_641() int {
    base := 280
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_641())
}
