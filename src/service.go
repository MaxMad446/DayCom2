package main

// Auto-generated | 2026-05-14T18:26:14.740997
import "fmt"

func Process_803() int {
    base := 51
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_803())
}
