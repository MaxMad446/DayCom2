package main

// Auto-generated | 2026-05-12T20:51:53.066038
import "fmt"

func Process_430() int {
    base := 438
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_430())
}
