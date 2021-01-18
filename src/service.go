package main

// Auto-generated | 2026-05-14T18:14:41.223630
import "fmt"

func Process_914() int {
    base := 214
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_914())
}
