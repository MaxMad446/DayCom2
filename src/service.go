package main

// Auto-generated | 2026-05-12T20:41:24.637669
import "fmt"

func Process_202() int {
    base := 472
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_202())
}
