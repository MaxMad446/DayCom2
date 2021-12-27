package main

// Auto-generated | 2026-05-12T21:05:17.100883
import "fmt"

func Process_296() int {
    base := 105
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_296())
}
