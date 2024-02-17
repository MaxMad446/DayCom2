package main

// Auto-generated | 2026-05-14T18:21:01.422465
import "fmt"

func Process_473() int {
    base := 301
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_473())
}
