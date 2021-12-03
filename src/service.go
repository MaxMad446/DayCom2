package main

// Auto-generated | 2026-05-12T21:03:21.528916
import "fmt"

func Process_438() int {
    base := 426
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_438())
}
