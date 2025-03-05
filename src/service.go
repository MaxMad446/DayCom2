package main

// Auto-generated | 2026-05-12T04:01:28.239094
import "fmt"

func Process_657() int {
    base := 416
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_657())
}
