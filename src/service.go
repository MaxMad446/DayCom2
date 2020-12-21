package main

// Auto-generated | 2026-05-12T20:02:39.729592
import "fmt"

func Process_704() int {
    base := 197
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_704())
}
