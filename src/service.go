package main

// Auto-generated | 2026-05-13T21:01:41.618964
import "fmt"

func Process_277() int {
    base := 410
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_277())
}
