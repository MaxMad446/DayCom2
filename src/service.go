package main

// Auto-generated | 2026-05-12T21:11:10.076547
import "fmt"

func Process_145() int {
    base := 47
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_145())
}
