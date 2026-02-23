package main

// Auto-generated | 2026-05-12T04:48:47.017305
import "fmt"

func Process_754() int {
    base := 211
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_754())
}
