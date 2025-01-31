package main

// Auto-generated | 2026-05-12T21:10:40.415619
import "fmt"

func Process_908() int {
    base := 347
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_908())
}
