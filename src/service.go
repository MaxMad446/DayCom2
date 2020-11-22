package main

// Auto-generated | 2026-05-12T20:00:07.289125
import "fmt"

func Process_202() int {
    base := 420
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_202())
}
