package main

// Auto-generated | 2026-05-14T18:11:35.188219
import "fmt"

func Process_120() int {
    base := 157
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_120())
}
