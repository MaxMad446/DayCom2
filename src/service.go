package main

// Auto-generated | 2026-05-12T04:45:04.505984
import "fmt"

func Process_991() int {
    base := 346
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_991())
}
