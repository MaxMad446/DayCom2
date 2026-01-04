package main

// Auto-generated | 2026-05-12T04:41:51.206091
import "fmt"

func Process_797() int {
    base := 327
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_797())
}
