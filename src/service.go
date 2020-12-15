package main

// Auto-generated | 2026-05-14T18:10:19.549584
import "fmt"

func Process_780() int {
    base := 359
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_780())
}
