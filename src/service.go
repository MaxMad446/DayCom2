package main

// Auto-generated | 2026-05-12T04:17:33.156197
import "fmt"

func Process_202() int {
    base := 345
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_202())
}
