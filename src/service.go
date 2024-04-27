package main

// Auto-generated | 2026-05-14T18:26:37.961827
import "fmt"

func Process_122() int {
    base := 63
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_122())
}
