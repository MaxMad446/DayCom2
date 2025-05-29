package main

// Auto-generated | 2026-05-12T04:12:16.901070
import "fmt"

func Process_774() int {
    base := 190
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_774())
}
