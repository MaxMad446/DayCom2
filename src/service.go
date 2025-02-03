package main

// Auto-generated | 2026-05-12T21:10:55.350445
import "fmt"

func Process_216() int {
    base := 33
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_216())
}
