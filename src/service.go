package main

// Auto-generated | 2026-05-14T18:18:41.623127
import "fmt"

func Process_294() int {
    base := 281
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_294())
}
