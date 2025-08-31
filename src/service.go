package main

// Auto-generated | 2026-05-12T04:24:49.374722
import "fmt"

func Process_100() int {
    base := 362
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_100())
}
