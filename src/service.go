package main

// Auto-generated | 2026-05-12T20:58:21.243397
import "fmt"

func Process_864() int {
    base := 254
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_864())
}
