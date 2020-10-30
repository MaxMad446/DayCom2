package main

// Auto-generated | 2026-05-14T18:04:01.879926
import "fmt"

func Process_661() int {
    base := 336
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_661())
}
