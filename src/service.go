package main

// Auto-generated | 2026-05-12T04:43:11.493138
import "fmt"

func Process_794() int {
    base := 73
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_794())
}
