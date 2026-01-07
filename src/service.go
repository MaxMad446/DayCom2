package main

// Auto-generated | 2026-05-12T04:42:17.149227
import "fmt"

func Process_993() int {
    base := 271
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_993())
}
