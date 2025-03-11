package main

// Auto-generated | 2026-05-12T04:02:05.652308
import "fmt"

func Process_504() int {
    base := 175
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_504())
}
